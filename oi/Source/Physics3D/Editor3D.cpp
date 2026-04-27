#include "Editor3D.h"
#include <iostream>
#include <cstring>
#include <cmath>

// 静态实例指针
Editor3D* Editor3D::instance = nullptr;

// ==================== 着色器代码 ====================

const char* vertexShaderSource = R"(
#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
out vec3 FragPosView;  // 视图空间位置
out vec3 NormalView;   // 视图空间法线
void main()
{
    // 计算视图空间位置和法线
    vec4 viewPos = view * model * vec4(aPos, 1.0);
    FragPosView = viewPos.xyz;
    
    // 法线转换到视图空间
    mat3 normalMatrix = mat3(transpose(inverse(view * model)));
    NormalView = normalMatrix * aNormal;
    
    gl_Position = projection * viewPos;
}
)";

const char* fragmentShaderSource = R"(
#version 330 core
out vec4 FragColor;
in vec3 FragPosView;  // 视图空间位置
in vec3 NormalView;   // 视图空间法线

uniform vec3 objectColor;
uniform float objectAlpha;

void main()
{
    vec3 norm = normalize(NormalView);
    // 在视图空间中，相机位置就是原点(0,0,0)
    vec3 viewDir = normalize(-FragPosView);
    
    // 环境光基础
    vec3 ambient = vec3(0.4, 0.4, 0.42);
    
    // 半球光照（基于视图空间的上方向）
    // 在视图空间中，Y轴仍然是上方向
    float hemiWeight = norm.y * 0.5 + 0.5;
    vec3 skyColor = vec3(0.85, 0.85, 0.9);
    vec3 groundColor = vec3(0.3, 0.3, 0.35);
    vec3 hemiLight = mix(groundColor, skyColor, hemiWeight) * 0.35;
    
    // 主光源（相对于相机，从右上前方照射）
    // 这些方向在视图空间中是固定的，所以相机移动时光照不变
    vec3 keyLightDir = normalize(vec3(0.6, 0.5, 0.6));  // 右上前
    float keyDiff = max(dot(norm, keyLightDir), 0.0);
    keyDiff = pow(keyDiff, 0.85);
    vec3 keyLight = keyDiff * vec3(1.0, 1.0, 0.98) * 0.7;
    
    // 补光（从左侧照射）
    vec3 fillLightDir = normalize(vec3(-0.6, 0.3, 0.4));  // 左上前
    float fillDiff = max(dot(norm, fillLightDir), 0.0);
    vec3 fillLight = fillDiff * vec3(0.88, 0.92, 1.0) * 0.35;
    
    // 背光（从后方，增强轮廓）
    vec3 rimLightDir = normalize(vec3(0.0, 0.2, -1.0));  // 后上方
    float rimDiff = max(dot(norm, rimLightDir), 0.0);
    vec3 rimLight = rimDiff * vec3(1.0, 1.0, 1.0) * 0.2;
    
    // Fresnel效果（边缘高光）
    float fresnel = pow(1.0 - max(dot(viewDir, norm), 0.0), 2.8);
    vec3 fresnelLight = fresnel * vec3(1.0, 1.0, 1.0) * 0.25;
    
    // 镜面反射（主光源）
    vec3 halfDir = normalize(keyLightDir + viewDir);
    float spec = pow(max(dot(norm, halfDir), 0.0), 80.0);
    vec3 specular = spec * vec3(1.0, 1.0, 1.0) * 0.3;
    
    // 组合所有光照
    vec3 lighting = ambient + hemiLight + keyLight + fillLight + rimLight + fresnelLight + specular;
    
    // 限制亮度范围
    lighting = clamp(lighting, 0.0, 1.6);
    
    vec3 result = lighting * objectColor;
    FragColor = vec4(result, objectAlpha);
}
)";

// ==================== P3D_Camera 实现 ====================

P3D_Camera::P3D_Camera(P3D_Vec3 pos)
    : position(pos), front(P3D_Vec3(0, 0, -1)), up(P3D_Vec3(0, 1, 0)),
      yaw(-135.0f), pitch(-35.0f), roll(0.0f), moveSpeed(5.0f), sensitivity(0.1f), zoom(45.0f)
{
    UpdateCameraVectors();
}

void P3D_Camera::ProcessMouseMovement(float xoffset, float yoffset)
{
    xoffset *= sensitivity;
    yoffset *= sensitivity;
    
    yaw += xoffset;
    pitch += yoffset;
    
    // 限制pitch避免画面倒转，但允许看到正上方和正下方
    if (pitch > 89.9f) pitch = 89.9f;
    if (pitch < -89.9f) pitch = -89.9f;
    
    UpdateCameraVectors();
}

void P3D_Camera::ProcessKeyboard(int direction, float deltaTime)
{
    float velocity = moveSpeed * deltaTime;
    if (direction == 0) position = position + front * velocity;
    if (direction == 1) position = position - front * velocity;
    if (direction == 2) position = position - right * velocity;
    if (direction == 3) position = position + right * velocity;
    if (direction == 4) position = position + up * velocity;
    if (direction == 5) position = position - up * velocity;
}

void P3D_Camera::ProcessMouseRoll(float xoffset)
{
    // 滚转相机（像人歪头一样）
    roll += xoffset * sensitivity;
    
    // 限制滚转角度在 -180 到 180 度之间
    if (roll > 180.0f) roll -= 360.0f;
    if (roll < -180.0f) roll += 360.0f;
    
    UpdateCameraVectors();
}

void P3D_Camera::ProcessMousePan(float xoffset, float yoffset, float deltaTime)
{
    // 平移相机位置（沿着相机的右方向和上方向）
    float panSpeed = moveSpeed * 0.003f;
    position = position - right * (xoffset * panSpeed);
    position = position + up * (yoffset * panSpeed);
}

void P3D_Camera::UpdateCameraVectors()
{
    // 计算前方向
    P3D_Vec3 newFront;
    newFront.x = cos(yaw * 3.14159f / 180.0f) * cos(pitch * 3.14159f / 180.0f);
    newFront.y = sin(pitch * 3.14159f / 180.0f);
    newFront.z = sin(yaw * 3.14159f / 180.0f) * cos(pitch * 3.14159f / 180.0f);
    front = newFront.normalize();
    
    // 计算右方向
    right = front.cross(P3D_Vec3(0, 1, 0)).normalize();
    
    // 计算上方向（应用滚转角度）
    P3D_Vec3 baseUp = right.cross(front).normalize();
    
    // 应用 roll 旋转（绕 front 轴旋转）
    float rollRad = roll * 3.14159f / 180.0f;
    float cosRoll = cos(rollRad);
    float sinRoll = sin(rollRad);
    
    // 使用 Rodrigues 旋转公式绕 front 轴旋转 baseUp
    up = baseUp * cosRoll + front.cross(baseUp) * sinRoll + front * (front.dot(baseUp)) * (1 - cosRoll);
    right = front.cross(up).normalize();
}

void P3D_Camera::GetViewMatrix(float* matrix)
{
    P3D_Vec3 target = position + front;
    P3D_Vec3 zaxis = (position - target).normalize();
    P3D_Vec3 xaxis = up.cross(zaxis).normalize();
    P3D_Vec3 yaxis = zaxis.cross(xaxis);
    
    matrix[0] = xaxis.x; matrix[4] = xaxis.y; matrix[8] = xaxis.z;   matrix[12] = -xaxis.dot(position);
    matrix[1] = yaxis.x; matrix[5] = yaxis.y; matrix[9] = yaxis.z;   matrix[13] = -yaxis.dot(position);
    matrix[2] = zaxis.x; matrix[6] = zaxis.y; matrix[10] = zaxis.z;  matrix[14] = -zaxis.dot(position);
    matrix[3] = 0;       matrix[7] = 0;       matrix[11] = 0;        matrix[15] = 1;
}

// ==================== Editor3D 实现 ====================

Editor3D::Editor3D()
    : window(nullptr), camera(P3D_Vec3(5, 5, 5)),
      firstMouse(true), lastX(800.0f), lastY(600.0f),
      deltaTime(0.0f), lastFrame(0.0f), mousePressed(false),
      wireframeMode(false), keyZPressed(false),
      zoomMin(1.0f), zoomMax(90.0f),
      shiftSpeedMultiplier(3.0f), shiftZoomMultiplier(2.0f),
      shaderProgram(0), instancedShaderProgram(0)
{
    instance = this;
}

Editor3D::~Editor3D()
{
    Cleanup();
}

bool Editor3D::Initialize(int width, int height, const char* title)
{
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return false;
    }
    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    
    // 开启多重采样抗锯齿（MSAA）- 8x 采样（拉满）
    glfwWindowHint(GLFW_SAMPLES, 8);
    
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return false;
    }
    
    glfwMakeContextCurrent(window);
    
    // 启用垂直同步（V-Sync）以防止画面撕裂
    glfwSwapInterval(1);
    
    setupCallbacks();
    
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return false;
    }
    
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    
    // 启用多重采样抗锯齿
    glEnable(GL_MULTISAMPLE);
    
    // 启用线条平滑（额外的抗锯齿）
    glEnable(GL_LINE_SMOOTH);
    glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
    
    shaderProgram = createShaderProgram();
    instancedShaderProgram = createInstancedShaderProgram();
    
    return true;
}

void Editor3D::setupCallbacks()
{
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback_static);
    glfwSetCursorPosCallback(window, mouse_callback_static);
    glfwSetMouseButtonCallback(window, mouse_button_callback_static);
    glfwSetScrollCallback(window, scroll_callback_static);
}

GLuint Editor3D::createShaderProgram()
{
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
    
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    
    GLuint program = glCreateProgram();
    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);
    glLinkProgram(program);
    
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
    
    return program;
}

GLuint Editor3D::createInstancedShaderProgram()
{
    // 实例化渲染的顶点着色器（支持多实例）
    const char* instancedVertexShaderSource = R"(
#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;
layout (location = 2) in mat4 aInstanceMatrix;  // 每个实例的变换矩阵

uniform mat4 view;
uniform mat4 projection;

out vec3 FragPosView;
out vec3 NormalView;

void main()
{
    vec4 viewPos = view * aInstanceMatrix * vec4(aPos, 1.0);
    FragPosView = viewPos.xyz;
    
    mat3 normalMatrix = mat3(transpose(inverse(view * aInstanceMatrix)));
    NormalView = normalMatrix * aNormal;
    
    gl_Position = projection * viewPos;
}
)";

    // 片段着色器与普通渲染相同
    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &instancedVertexShaderSource, NULL);
    glCompileShader(vertexShader);
    
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
    
    GLuint program = glCreateProgram();
    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);
    glLinkProgram(program);
    
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
    
    return program;
}

void Editor3D::processInput()
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
    
    // 检测 Shift 键是否按下
    bool shiftPressed = (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS || 
                        glfwGetKey(window, GLFW_KEY_RIGHT_SHIFT) == GLFW_PRESS);
    
    // 临时修改相机速度（如果按下 Shift）
    float originalSpeed = camera.moveSpeed;

    camera.moveSpeed *= 200.f;

    if (shiftPressed) {
        camera.moveSpeed *= shiftSpeedMultiplier;
    }
    
    // 相机移动
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.ProcessKeyboard(0, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.ProcessKeyboard(1, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.ProcessKeyboard(2, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.ProcessKeyboard(3, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
        camera.ProcessKeyboard(4, deltaTime);
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
        camera.ProcessKeyboard(5, deltaTime);
    
    // 恢复原始速度
    camera.moveSpeed = originalSpeed;
    
    // 切换线框模式
    if (glfwGetKey(window, GLFW_KEY_Z) == GLFW_PRESS) {
        if (!keyZPressed) {
            wireframeMode = !wireframeMode;
            keyZPressed = true;
            std::cout << "Wireframe Mode: " << (wireframeMode ? "ON" : "OFF") << std::endl;
        }
    } else {
        keyZPressed = false;
    }
}

void Editor3D::BeginFrame()
{
    float currentFrame = static_cast<float>(glfwGetTime());
    deltaTime = currentFrame - lastFrame;
    lastFrame = currentFrame;
    
    processInput();
    
    // Blender 风格的深灰色背景
    glClearColor(0.23f, 0.23f, 0.23f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glUseProgram(shaderProgram);
    
    float view[16];
    camera.GetViewMatrix(view);
    GLint viewLoc = glGetUniformLocation(shaderProgram, "view");
    glUniformMatrix4fv(viewLoc, 1, GL_FALSE, view);
    
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    float projection[16];
    getPerspectiveMatrix(projection, camera.zoom, (float)width / (float)height, 0.1f, 1000000.0f);
    GLint projLoc = glGetUniformLocation(shaderProgram, "projection");
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, projection);
    
    if (wireframeMode) {
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    } else {
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    }
}

void Editor3D::EndFrame()
{
    glfwSwapBuffers(window);
    glfwPollEvents();
}

bool Editor3D::ShouldClose()
{
    return glfwWindowShouldClose(window);
}

void Editor3D::Cleanup()
{
    if (shaderProgram) glDeleteProgram(shaderProgram);
    if (instancedShaderProgram) glDeleteProgram(instancedShaderProgram);
    
    if (window) {
        glfwDestroyWindow(window);
        window = nullptr;
    }
    glfwTerminate();
}

P3D_Mesh* Editor3D::CreateMesh(const std::vector<P3D_Vertex>& vertices, const std::vector<unsigned int>& indices)
{
    P3D_Mesh* mesh = new P3D_Mesh();
    mesh->indexCount = indices.size();
    mesh->hasIndices = true;
    
    glGenVertexArrays(1, &mesh->VAO);
    glGenBuffers(1, &mesh->VBO);
    glGenBuffers(1, &mesh->EBO);
    
    glBindVertexArray(mesh->VAO);
    
    glBindBuffer(GL_ARRAY_BUFFER, mesh->VBO);
    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(P3D_Vertex), vertices.data(), GL_STATIC_DRAW);
    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mesh->EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), indices.data(), GL_STATIC_DRAW);
    
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(P3D_Vertex), (void*)0);
    glEnableVertexAttribArray(0);
    
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(P3D_Vertex), (void*)offsetof(P3D_Vertex, normal));
    glEnableVertexAttribArray(1);
    
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    
    return mesh;
}

P3D_Mesh* Editor3D::CreateMesh(const std::vector<P3D_Vertex>& vertices)
{
    P3D_Mesh* mesh = new P3D_Mesh();
    mesh->indexCount = vertices.size();
    mesh->hasIndices = false;
    
    glGenVertexArrays(1, &mesh->VAO);
    glGenBuffers(1, &mesh->VBO);
    
    glBindVertexArray(mesh->VAO);
    
    glBindBuffer(GL_ARRAY_BUFFER, mesh->VBO);
    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(P3D_Vertex), vertices.data(), GL_STATIC_DRAW);
    
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(P3D_Vertex), (void*)0);
    glEnableVertexAttribArray(0);
    
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(P3D_Vertex), (void*)offsetof(P3D_Vertex, normal));
    glEnableVertexAttribArray(1);
    
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
    
    return mesh;
}

void Editor3D::DestroyMesh(P3D_Mesh* mesh)
{
    if (mesh) {
        delete mesh;
    }
}

void Editor3D::RenderMesh(P3D_Mesh* mesh, P3D_Vec3 position, P3D_Vec3 rotation, P3D_Vec3 scale, P3D_Vec3 color)
{
    if (!mesh) return;
    
    glUseProgram(shaderProgram);
    
    GLint colorLoc = glGetUniformLocation(shaderProgram, "objectColor");
    glUniform3f(colorLoc, color.x, color.y, color.z);
    
    GLint alphaLoc = glGetUniformLocation(shaderProgram, "objectAlpha");
    glUniform1f(alphaLoc, 1.0f);  // 模型默认不透明
    
    // 不再需要 viewPos uniform，因为在视图空间中计算
    
    float model[16];
    getModelMatrix(model, position, rotation, scale);
    GLint modelLoc = glGetUniformLocation(shaderProgram, "model");
    glUniformMatrix4fv(modelLoc, 1, GL_FALSE, model);
    
    float view[16];
    camera.GetViewMatrix(view);
    GLint viewLoc = glGetUniformLocation(shaderProgram, "view");
    glUniformMatrix4fv(viewLoc, 1, GL_FALSE, view);
    
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    float projection[16];
    getPerspectiveMatrix(projection, camera.zoom, (float)width / (float)height, 0.1f, 1000000.0f);
    GLint projLoc = glGetUniformLocation(shaderProgram, "projection");
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, projection);
    
    glBindVertexArray(mesh->VAO);
    if (mesh->hasIndices) {
        glDrawElements(GL_TRIANGLES, mesh->indexCount, GL_UNSIGNED_INT, 0);
    } else {
        glDrawArrays(GL_TRIANGLES, 0, mesh->indexCount);
    }
    glBindVertexArray(0);
}

void Editor3D::RenderMeshInstanced(P3D_Mesh* mesh, const std::vector<P3D_InstanceData>& instances, P3D_Vec3 color)
{
    if (!mesh || instances.empty()) return;
    
    glUseProgram(instancedShaderProgram);
    
    // 设置颜色
    GLint colorLoc = glGetUniformLocation(instancedShaderProgram, "objectColor");
    glUniform3f(colorLoc, color.x, color.y, color.z);
    
    GLint alphaLoc = glGetUniformLocation(instancedShaderProgram, "objectAlpha");
    glUniform1f(alphaLoc, 1.0f);
    
    // 设置view和projection矩阵
    float view[16];
    camera.GetViewMatrix(view);
    GLint viewLoc = glGetUniformLocation(instancedShaderProgram, "view");
    glUniformMatrix4fv(viewLoc, 1, GL_FALSE, view);
    
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    float projection[16];
    getPerspectiveMatrix(projection, camera.zoom, (float)width / (float)height, 0.1f, 1000000.0f);
    GLint projLoc = glGetUniformLocation(instancedShaderProgram, "projection");
    glUniformMatrix4fv(projLoc, 1, GL_FALSE, projection);
    
    // 更新实例缓冲区
    glBindVertexArray(mesh->VAO);
    
    if (mesh->InstanceVBO == 0) {
        glGenBuffers(1, &mesh->InstanceVBO);
    }
    
    glBindBuffer(GL_ARRAY_BUFFER, mesh->InstanceVBO);
    glBufferData(GL_ARRAY_BUFFER, instances.size() * sizeof(P3D_InstanceData), instances.data(), GL_DYNAMIC_DRAW);
    
    // 设置实例属性（mat4需要4个顶点属性槽位）
    for (int i = 0; i < 4; i++) {
        glEnableVertexAttribArray(2 + i);
        glVertexAttribPointer(2 + i, 4, GL_FLOAT, GL_FALSE, sizeof(P3D_InstanceData), 
                             (void*)(i * 4 * sizeof(float)));
        glVertexAttribDivisor(2 + i, 1);  // 每个实例更新一次
    }
    
    // 实例化渲染
    if (mesh->hasIndices) {
        glDrawElementsInstanced(GL_TRIANGLES, mesh->indexCount, GL_UNSIGNED_INT, 0, instances.size());
    } else {
        glDrawArraysInstanced(GL_TRIANGLES, 0, mesh->indexCount, instances.size());
    }
    
    glBindVertexArray(0);
}

void Editor3D::getPerspectiveMatrix(float* matrix, float fov, float aspect, float nearPlane, float farPlane)
{
    memset(matrix, 0, 16 * sizeof(float));
    float tanHalfFov = tan(fov * 3.14159f / 360.0f);
    
    matrix[0] = 1.0f / (aspect * tanHalfFov);
    matrix[5] = 1.0f / tanHalfFov;
    matrix[10] = -(farPlane + nearPlane) / (farPlane - nearPlane);
    matrix[11] = -1.0f;
    matrix[14] = -(2.0f * farPlane * nearPlane) / (farPlane - nearPlane);
}

void Editor3D::getModelMatrix(float* matrix, P3D_Vec3 position, P3D_Vec3 rotation, P3D_Vec3 scale)
{
    float rx = rotation.x * 3.14159f / 180.0f;
    float ry = rotation.y * 3.14159f / 180.0f;
    float rz = rotation.z * 3.14159f / 180.0f;
    
    float cx = cos(rx), sx = sin(rx);
    float cy = cos(ry), sy = sin(ry);
    float cz = cos(rz), sz = sin(rz);
    
    matrix[0] = scale.x * (cy * cz);
    matrix[1] = scale.x * (cy * sz);
    matrix[2] = scale.x * (-sy);
    matrix[3] = 0;
    
    matrix[4] = scale.y * (sx * sy * cz - cx * sz);
    matrix[5] = scale.y * (sx * sy * sz + cx * cz);
    matrix[6] = scale.y * (sx * cy);
    matrix[7] = 0;
    
    matrix[8] = scale.z * (cx * sy * cz + sx * sz);
    matrix[9] = scale.z * (cx * sy * sz - sx * cz);
    matrix[10] = scale.z * (cx * cy);
    matrix[11] = 0;
    
    matrix[12] = position.x;
    matrix[13] = position.y;
    matrix[14] = position.z;
    matrix[15] = 1.0f;
}

// ==================== 静态回调 ====================

void Editor3D::framebuffer_size_callback_static(GLFWwindow* window, int width, int height)
{
    if (instance) instance->framebuffer_size_callback(width, height);
}

void Editor3D::mouse_callback_static(GLFWwindow* window, double xpos, double ypos)
{
    if (instance) instance->mouse_callback(xpos, ypos);
}

void Editor3D::mouse_button_callback_static(GLFWwindow* window, int button, int action, int mods)
{
    if (instance) instance->mouse_button_callback(button, action, mods);
}

void Editor3D::scroll_callback_static(GLFWwindow* window, double xoffset, double yoffset)
{
    if (instance) instance->scroll_callback(xoffset, yoffset);
}

void Editor3D::framebuffer_size_callback(int width, int height)
{
    glViewport(0, 0, width, height);
}

void Editor3D::mouse_callback(double xposIn, double yposIn)
{
    float xpos = static_cast<float>(xposIn);
    float ypos = static_cast<float>(yposIn);
    
    if (firstMouse) {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }
    
    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos;
    
    lastX = xpos;
    lastY = ypos;
    
    // 检测 Ctrl 键
    bool ctrlPressed = (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS || 
                       glfwGetKey(window, GLFW_KEY_RIGHT_CONTROL) == GLFW_PRESS);
    
    // 中键拖动
    if (mousePressed) {
        if (ctrlPressed) {
            // Ctrl + 中键 = 滚转相机（像人歪头）
            camera.ProcessMouseRoll(xoffset);
        } else {
            // 中键 = 旋转视角（仰头低头、左转右转）
            camera.ProcessMouseMovement(xoffset, yoffset);
        }
    }
}

void Editor3D::mouse_button_callback(int button, int action, int mods)
{
    if (button == GLFW_MOUSE_BUTTON_MIDDLE) {
        if (action == GLFW_PRESS) {
            mousePressed = true;
        } else if (action == GLFW_RELEASE) {
            mousePressed = false;
        }
    }
}

void Editor3D::scroll_callback(double xoffset, double yoffset)
{
    // 检测 Shift 键是否按下
    bool shiftPressed = (glfwGetKey(window, GLFW_KEY_LEFT_SHIFT) == GLFW_PRESS || 
                        glfwGetKey(window, GLFW_KEY_RIGHT_SHIFT) == GLFW_PRESS);
    
    // 应用缩放（Shift 加速）
    float zoomDelta = (float)yoffset;
    if (shiftPressed) {
        zoomDelta *= shiftZoomMultiplier;
    }
    
    camera.zoom -= zoomDelta;
    if (camera.zoom < zoomMin) camera.zoom = zoomMin;
    if (camera.zoom > zoomMax) camera.zoom = zoomMax;
}

void Editor3D::SetZoomLimits(float minZoom, float maxZoom)
{
    zoomMin = minZoom;
    zoomMax = maxZoom;
    
    // 确保当前 zoom 值在新的范围内
    if (camera.zoom < zoomMin) camera.zoom = zoomMin;
    if (camera.zoom > zoomMax) camera.zoom = zoomMax;
}

void Editor3D::GetZoomLimits(float& minZoom, float& maxZoom)
{
    minZoom = zoomMin;
    maxZoom = zoomMax;
}

void Editor3D::SetShiftSpeedMultiplier(float multiplier)
{
    shiftSpeedMultiplier = multiplier > 0 ? multiplier : 1.0f;
}

void Editor3D::SetShiftZoomMultiplier(float multiplier)
{
    shiftZoomMultiplier = multiplier > 0 ? multiplier : 1.0f;
}

// ==================== 相机位置和旋转设置 ====================

void Editor3D::SetCameraPosition(P3D_Vec3 position)
{
    camera.position = position;
}

void Editor3D::SetCameraPosition(float x, float y, float z)
{
    camera.position = P3D_Vec3(x, y, z);
}

void Editor3D::SetCameraRotation(float yaw, float pitch, float roll)
{
    camera.yaw = yaw;
    camera.pitch = pitch;
    camera.roll = roll;
    
    //// 限制pitch避免画面倒转
    if (camera.pitch > 89.9f) camera.pitch = 89.9f;
    if (camera.pitch < -89.9f) camera.pitch = -89.9f;
    //
    //// 限制 roll 在 -180 到 180 度之间
    //if (camera.roll > 180.0f) camera.roll -= 360.0f;
    //if (camera.roll < -180.0f) camera.roll += 360.0f;
    
    camera.UpdateCameraVectors();
}

void Editor3D::SetCameraYaw(float yaw)
{
    camera.yaw = yaw;
    camera.UpdateCameraVectors();
}

void Editor3D::SetCameraPitch(float pitch)
{
    camera.pitch = pitch;
    
    // 限制pitch避免画面倒转
    if (camera.pitch > 89.9f) camera.pitch = 89.9f;
    if (camera.pitch < -89.9f) camera.pitch = -89.9f;
    
    camera.UpdateCameraVectors();
}

void Editor3D::SetCameraRoll(float roll)
{
    camera.roll = roll;
    
    // 限制 roll 在 -180 到 180 度之间
    if (camera.roll > 180.0f) camera.roll -= 360.0f;
    if (camera.roll < -180.0f) camera.roll += 360.0f;
    
    camera.UpdateCameraVectors();
}


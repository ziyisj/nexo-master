#pragma once

#include <winsock2.h>
#include <windows.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <cmath>

// ==================== 数据结构（带 P3D_ 前缀避免冲突）====================

struct P3D_Vec3 {
    float x, y, z;
    P3D_Vec3(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}
    P3D_Vec3 operator+(const P3D_Vec3& v) const { return P3D_Vec3(x + v.x, y + v.y, z + v.z); }
    P3D_Vec3 operator-(const P3D_Vec3& v) const { return P3D_Vec3(x - v.x, y - v.y, z - v.z); }
    P3D_Vec3 operator*(float s) const { return P3D_Vec3(x * s, y * s, z * s); }
    float dot(const P3D_Vec3& v) const { return x * v.x + y * v.y + z * v.z; }
    P3D_Vec3 cross(const P3D_Vec3& v) const {
        return P3D_Vec3(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }
    P3D_Vec3 normalize() const {
        float len = std::sqrt(x * x + y * y + z * z);
        return len > 0 ? P3D_Vec3(x / len, y / len, z / len) : P3D_Vec3(0, 0, 0);
    }
};

struct P3D_Vertex {
    P3D_Vec3 position;
    P3D_Vec3 normal;
    P3D_Vertex(P3D_Vec3 pos = P3D_Vec3(), P3D_Vec3 norm = P3D_Vec3()) : position(pos), normal(norm) {}
};

struct P3D_Mesh {
    GLuint VAO;
    GLuint VBO;
    GLuint EBO;
    GLuint InstanceVBO;  // 实例化缓冲区
    unsigned int indexCount;
    bool hasIndices;
    
    P3D_Mesh() : VAO(0), VBO(0), EBO(0), InstanceVBO(0), indexCount(0), hasIndices(false) {}
    ~P3D_Mesh() {
        if (VAO) glDeleteVertexArrays(1, &VAO);
        if (VBO) glDeleteBuffers(1, &VBO);
        if (EBO) glDeleteBuffers(1, &EBO);
        if (InstanceVBO) glDeleteBuffers(1, &InstanceVBO);
    }
};

// 实例化渲染的变换数据
struct P3D_InstanceData {
    float modelMatrix[16];  // 4x4变换矩阵
};

// ==================== 相机类 ====================

class P3D_Camera {
public:
    P3D_Vec3 position;
    P3D_Vec3 front;
    P3D_Vec3 up;
    P3D_Vec3 right;
    
    float yaw;
    float pitch;
    float roll;  // 滚转角度（绕视线轴旋转）
    float moveSpeed;
    float sensitivity;
    float zoom;
    
    P3D_Camera(P3D_Vec3 pos = P3D_Vec3(5, 5, 5));
    void ProcessMouseMovement(float xoffset, float yoffset);
    void ProcessMouseRoll(float xoffset);
    void ProcessMousePan(float xoffset, float yoffset, float deltaTime);
    void ProcessKeyboard(int direction, float deltaTime);
    void GetViewMatrix(float* matrix);
    void UpdateCameraVectors();
};

// ==================== 编辑器核心类 ====================

class Editor3D {
private:
    GLFWwindow* window;
    P3D_Camera camera;
    
    // 状态
    bool firstMouse;
    float lastX, lastY;
    float deltaTime, lastFrame;
    bool mousePressed;
    bool wireframeMode;
    bool keyZPressed;
    
    // 缩放限制
    float zoomMin;
    float zoomMax;
    
    // Shift 加速设置
    float shiftSpeedMultiplier;
    float shiftZoomMultiplier;
    
    // 渲染资源
    GLuint shaderProgram;
    GLuint instancedShaderProgram;  // 实例化渲染shader
    
    // 内部方法
    void setupCallbacks();
    GLuint createShaderProgram();
    GLuint createInstancedShaderProgram();  // 创建实例化shader
    void processInput();
    void getPerspectiveMatrix(float* matrix, float fov, float aspect, float nearPlane, float farPlane);
    
public:  // getModelMatrix需要被Physics3D调用
    void getModelMatrix(float* matrix, P3D_Vec3 position, P3D_Vec3 rotation, P3D_Vec3 scale);
    
private:
    
    // 静态回调辅助
    static Editor3D* instance;
    static void framebuffer_size_callback_static(GLFWwindow* window, int width, int height);
    static void mouse_callback_static(GLFWwindow* window, double xpos, double ypos);
    static void mouse_button_callback_static(GLFWwindow* window, int button, int action, int mods);
    static void scroll_callback_static(GLFWwindow* window, double xoffset, double yoffset);
    
    void framebuffer_size_callback(int width, int height);
    void mouse_callback(double xpos, double ypos);
    void mouse_button_callback(int button, int action, int mods);
    void scroll_callback(double xoffset, double yoffset);
    
public:
    Editor3D();
    ~Editor3D();
    
    bool Initialize(int width = 1440, int height = 980, const char* title = "3D Editor");
    void BeginFrame();
    void EndFrame();
    bool ShouldClose();
    void Cleanup();
    
    // 网格管理
    P3D_Mesh* CreateMesh(const std::vector<P3D_Vertex>& vertices, const std::vector<unsigned int>& indices);
    P3D_Mesh* CreateMesh(const std::vector<P3D_Vertex>& vertices);
    void DestroyMesh(P3D_Mesh* mesh);
    
    // 渲染
    void RenderMesh(P3D_Mesh* mesh, P3D_Vec3 position, P3D_Vec3 rotation, P3D_Vec3 scale, P3D_Vec3 color);
    
    // 实例化渲染（一次性渲染多个相同网格的实例）
    void RenderMeshInstanced(P3D_Mesh* mesh, const std::vector<P3D_InstanceData>& instances, P3D_Vec3 color);
    
    // 获取状态
    GLFWwindow* GetWindow() { return window; }
    bool IsWireframeMode() { return wireframeMode; }
    
    // 缩放限制设置
    void SetZoomLimits(float minZoom, float maxZoom);
    void GetZoomLimits(float& minZoom, float& maxZoom);
    float GetCurrentZoom() { return camera.zoom; }
    
    // Shift 加速设置
    void SetShiftSpeedMultiplier(float multiplier);
    void SetShiftZoomMultiplier(float multiplier);
    float GetShiftSpeedMultiplier() { return shiftSpeedMultiplier; }
    float GetShiftZoomMultiplier() { return shiftZoomMultiplier; }
    
    // 相机位置和旋转设置
    void SetCameraPosition(P3D_Vec3 position);
    void SetCameraPosition(float x, float y, float z);
    P3D_Vec3 GetCameraPosition() { return camera.position; }
    
    void SetCameraRotation(float yaw, float pitch, float roll);
    void SetCameraYaw(float yaw);
    void SetCameraPitch(float pitch);
    void SetCameraRoll(float roll);
    float GetCameraYaw() { return camera.yaw; }
    float GetCameraPitch() { return camera.pitch; }
    float GetCameraRoll() { return camera.roll; }
    
    P3D_Vec3 GetCameraFront() { return camera.front; }
    P3D_Vec3 GetCameraRight() { return camera.right; }
    P3D_Vec3 GetCameraUp() { return camera.up; }
};


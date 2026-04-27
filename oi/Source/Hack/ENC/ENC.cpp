#include "ENC.h"
#include <unordered_map>
#include "Common/Data.h"
#include <mutex>

#include "Utils/Utils.h"

#include "sub_99D820.h"
#include "sub_973130.h"
#include "sub_9813D0.h"
#include "sub_98F3A0.h"

#include "sub_27DEC50.h"
#include "sub_27ECBC0.h"
#include "sub_27FAD40.h"
#include "sub_28261A0.h"
#include "sub_2834A10.h"
#include "sub_28097D0.h"
#include "sub_28177F0.h"

/*
    *a1 a1
    *)(

    **(_QWORD **)( | FuckEnc::CacheReadPlural<_QWORD>(

    *(_QWORD *)( | FuckEnc::CacheRead<_QWORD>(
    *(_DWORD *)( | FuckEnc::CacheRead<_DWORD>(
    *(_BYTE *)( | FuckEnc::CacheRead<_BYTE>(
    *(unsigned __int8 *)( | FuckEnc::CacheRead<unsigned __int8>(
    *(unsigned int *)( | FuckEnc::CacheRead<unsigned int>(
    *(unsigned __int16 *)( | FuckEnc::CacheRead<unsigned __int16>(

    &unk_([0-9A-Fa-f]+) | 0x$1
    &(unk|loc)_([0-9A-Fa-f]+) | 0x$2

    "([^"\\]|\\.)*"

    sub_

    *(_QWORD*)v4 | FuckEnc::CacheRead<_QWORD>(v4)

    *(_QWORD*)a2 | FuckEnc::CacheRead<_QWORD>(a2)
    *(_QWORD*)a3 | FuckEnc::CacheRead<_QWORD>(a3)
    *a3 | FuckEnc::CacheRead<__int64>(a3)
    *a2 | FuckEnc::CacheRead<__int64>(a2)

    **(_QWORD**)v31 | FuckEnc::CacheReadPlural<_QWORD>(v31)
    *(_QWORD*)v34 | FuckEnc::CacheRead<_QWORD>(v34)

    \*\(_QWORD\*\)([a-zA-Z_][a-zA-Z0-9_]*)\s* | FuckEnc::CacheRead<_QWORD>($1)
*/

void ENC::Decrypt(uint8_t Type, unsigned int* Data, unsigned int Size, uint16_t Handle, bool Lock, bool DeBug, uint64_t DeBugFunc, uint64_t DeBugBase)
{
    if (Lock)
        std::shared_lock<std::shared_mutex> lock(GameData.UPTRDecrypt.CacheMutex);

    if (GameData.Config.Window.Server != 0 || GameData.Process.Base == 0 || GameData.Process.PID == 0)
        return;

    struct FEncTable
    {
        uint64_t Func;
        uint64_t Base;
    };

    static std::unordered_map<uint64_t, FEncTable> EncDoubleTables = {
        {0x142843E80, {0x27DEC50, 0x13FBF8B0}}, // 2843E80
        {0x142843EA0, {0x27ECBC0, 0x13FBF838}}, // 2843EA0
        {0x142843EC0, {0x27FAD40, 0x13FBF7C8}}, // 2843EC0
        {0x142843EE0, {0x28097D0, 0x13FBF710}}, // 2843EE0
        {0x142843F00, {0x28177F0, 0x13FBF990}}, // 2843F00
        {0x142843F20, {0x28261A0, 0x13FBF4F0}}, // 2843F20
        {0x142843F40, {0x2834A10, 0x13FBF4F8}}, // 2843F40
        {0x142843F60, {0x99D820, 0x13FBFA00}},  // 2843F60
    };

    static std::unordered_map<uint64_t, FEncTable> EncPTRTables = {
        {1, {0x99D820, 0x1435AB98}}, // UTRP Decrypt 1
        {2, {0x973130, 0x1435ABA8}}, // UTRP Decrypt 2
        {3, {0x9813D0, 0x1435ABB8}}, // UTRP Decrypt 3
        {4, {0x98F3A0, 0x1435ABC8}}, // UTRP Decrypt 4
    };

    uint64_t EncCallOffset{};
    uint64_t EncCall{};
    FEncTable EncTable{};

    if (!DeBug)
    {
        if ((GameData.UPTRDecrypt.SwitchEncryptor > 4 || GameData.UPTRDecrypt.SwitchEncryptor == 0 || Type == 1))
        {
            static uint64_t LastDoubleFuncOffset = 0;
            uint64_t DoubleFuncOffset = FuckEnc::CacheRead<uint64_t>(GameData.Process.Base + 0x1432F5A8);

            EncCallOffset = DoubleFuncOffset;

            if (DoubleFuncOffset != 0)
            {
                auto it = EncDoubleTables.find(DoubleFuncOffset);
                if (it != EncDoubleTables.end())
                {
                    EncCall = it->first;
                    EncTable = it->second;

                    if (LastDoubleFuncOffset != DoubleFuncOffset)
                    {
                        LastDoubleFuncOffset = DoubleFuncOffset;
                        Utils::Log(1, XorStr("Successfully updated the double encryption func: 0x%llX, 0x%llX, 0x%llX"), LastDoubleFuncOffset, EncTable.Func, EncTable.Base);
                    }
                }
            }
        }
        else
        {
            static uint64_t LastPTRFuncOffset = 0;

            auto it = EncPTRTables.find(GameData.UPTRDecrypt.SwitchEncryptor);
            if (it != EncPTRTables.end())
            {
                EncCall = it->first;
                EncTable = it->second;

                if (LastPTRFuncOffset != GameData.UPTRDecrypt.SwitchEncryptor)
                {
                    LastPTRFuncOffset = GameData.UPTRDecrypt.SwitchEncryptor;
                    Utils::Log(1, XorStr("Successfully updated the ptr encryption func: 0x%llX, 0x%llX, 0x%llX"), LastPTRFuncOffset, EncTable.Func, EncTable.Base);
                }
            }
        }

        if (EncCall == 0)
        {
            GameData.UPTRDecrypt.LastUPTREnable = -1;
            GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
            GameData.UPTRDecrypt.LastPID = 0;
            Utils::Log(3, XorStr("Error unk encryption func: 0x%llX, 0x%llX, 0x%llX"), EncCallOffset, EncTable.Func, EncTable.Base);
            return;
        }
    }

    uint64_t BaseOffset = FuckEnc::CacheRead<uint64_t>(GameData.Process.Base + EncTable.Base);
    if (EncTable.Base == 0x13FBF4F8 || EncTable.Base == 0x13FBF4F0)
    {
        BaseOffset = FuckEnc::CacheRead<uint64_t>(BaseOffset);
    }

    if (DeBug)
    {
        EncTable.Func = DeBugFunc;
        BaseOffset = DeBugBase;
    }

    if (BaseOffset == 0)
    {
        GameData.UPTRDecrypt.LastUPTREnable = -1;
        GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
        GameData.UPTRDecrypt.LastPID = 0;
        Utils::Log(3, XorStr("Error read base offset: 0x%llX -> 0x%llX"), EncTable.Base, BaseOffset);
        return;
    }

    switch (EncTable.Func)
    {
    case 0x99D820:
    {
        sub_99D820(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x973130:
    {
        sub_973130(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x9813D0:
    {
        sub_9813D0(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x98F3A0:
    {
        sub_98F3A0(BaseOffset, Data, Size, Handle);
        break;
    }

    // Double
    case 0x27DEC50:
    {
        sub_27DEC50(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x27ECBC0:
    {
        sub_27ECBC0(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x27FAD40:
    {
        sub_27FAD40(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x28261A0:
    {
        sub_28261A0(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x2834A10:
    {
        sub_2834A10(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x28097D0:
    {
        sub_28097D0(BaseOffset, Data, Size, Handle);
        break;
    }
    case 0x28177F0:
    {
        sub_28177F0(BaseOffset, Data, Size, Handle);
        break;
    }
    default:
        GameData.UPTRDecrypt.LastUPTREnable = -1;
        GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
        GameData.UPTRDecrypt.LastPID = 0;
        Utils::Log(3, XorStr("Unknown Encryptor Call: 0x%llX"), EncTable.Func);
        break;
    }
}

/*

import idaapi
import ida_hexrays
import ida_funcs
import ida_name
import re

def replace_memory_access(code):
    """替换内存访问模式为FuckEnc::CacheRead"""
    replacements = [
        (r'\*\*\(_QWORD \*\*\)\(', 'FuckEnc::CacheReadPlural<_QWORD>('),
        (r'\*\*\(_DWORD \*\*\)\(', 'FuckEnc::CacheReadPlural<_DWORD>('),
        (r'\*\(_QWORD \*\)\(', 'FuckEnc::CacheRead<_QWORD>('),
        (r'\*\(_DWORD \*\)\(', 'FuckEnc::CacheRead<_DWORD>('),
        (r'\*\(_BYTE \*\)\(', 'FuckEnc::CacheRead<_BYTE>('),
        (r'\*\(_QWORD \*\)a2', 'FuckEnc::CacheRead<_QWORD>(a2)'),
        (r'\*\(_QWORD \*\)a3', 'FuckEnc::CacheRead<_QWORD>(a3)'),

        (r'\*\(unsigned __int8 \*\)\(', 'FuckEnc::CacheRead<unsigned __int8>('),
        (r'\*\(unsigned int \*\)\(', 'FuckEnc::CacheRead<unsigned int>('),
        (r'\*\(unsigned __int16 \*\)\(', 'FuckEnc::CacheRead<unsigned __int16>('),
    ]

    result = code
    for pattern, replacement in replacements:
        result = re.sub(pattern, replacement, result)

    result = re.sub(r'&unk_([0-9A-Fa-f]+)', r'0x\1', result)
    result = re.sub(r'&loc_([0-9A-Fa-f]+)', r'0x\1', result)

    return result

def get_function_declaration(decompiled_text):
    """提取函数声明"""
    lines = decompiled_text.split('\n')
    for line in lines:
        if '__fastcall' in line or '__cdecl' in line:
            return line.strip().rstrip('{').strip()
    return ""

def parse_function_parameters(func_decl):
    """解析函数声明并提取非指针参数"""
    param_match = re.search(r'\((.*?)\)', func_decl)
    if not param_match:
        return []

    params_str = param_match.group(1).strip()
    if not params_str or params_str == 'void':
        return []

    # 分割参数
    params = []
    depth = 0
    current_param = []

    for char in params_str + ',':
        if char == ',' and depth == 0:
            param = ''.join(current_param).strip()
            if param:
                params.append(param)
            current_param = []
        else:
            if char in '(<[':
                depth += 1
            elif char in ')>]':
                depth -= 1
            current_param.append(char)

    # 分析每个参数，提取类型和名称
    casts = []
    for param in params:
        param = param.strip()
        if not param:
            continue

        # 检查是否为指针类型（包含 * 或以 * 结尾）
        if '*' in param:
            continue

        # 提取参数名（最后一个单词）
        parts = param.split()
        if len(parts) < 2:
            continue

        param_name = parts[-1]
        param_type = ' '.join(parts[:-1])

        # 生成强制转换语句
        casts.append(f"{param_name} = ({param_type}){param_name};")

    return casts

def extract_functions_from_array(func_addr):
    """从给定函数中提取所有sub_XXXXXX函数地址"""
    func = ida_funcs.get_func(func_addr)
    if not func:
        print(f"无法获取函数: {hex(func_addr)}")
        return []

    cfunc = ida_hexrays.decompile(func)
    if not cfunc:
        print(f"反编译失败: {hex(func_addr)}")
        return []

    content = str(cfunc)
    pattern = r'([a-zA-Z_]\w*)\[((?:0x[0-9A-F]+)|(?:\d+))\]\s*=\s*\(__int64\)sub_([0-9A-F]+)'
    matches = re.findall(pattern, content)

    if not matches:
        print(f"在函数 {hex(func_addr)} 中未找到函数数组赋值模式")
        return []

    array_name = matches[0][0]
    print(f"在函数 {hex(func_addr)} 中找到数组变量名: {array_name}")

    functions = []
    for var_name, index, addr in matches:
        if var_name == array_name:
            if index.startswith('0x'):
                index_num = int(index, 16)
            else:
                index_num = int(index)
            functions.append((index_num, f"sub_{addr}"))

    functions.sort(key=lambda x: x[0])
    return functions

def clean_function_body(decompiled_text):
    lines = decompiled_text.split('\n')
    start = 0
    for i, line in enumerate(lines):
        if '{' in line:
            start = i + 1
            break

    body = lines[start:-1]
    cleaned_body = []
    for line in body:
        if '{' not in line and '}' not in line:
            replaced_line = replace_memory_access(line)
            cleaned_body.append(replaced_line)
    return '\n      '.join(cleaned_body)

def decompile_and_save_combined(main_func_addrs, output_file):
    """处理多个主函数并合并保存到一个文件"""
    if not ida_hexrays.init_hexrays_plugin():
        print("请确保您已安装并激活Hex-Rays反编译器！")
        return

    # 用于跟踪已处理的函数地址，避免重复
    processed_functions = set()
    duplicate_count = 0

    with open(output_file, 'w', encoding='utf-8') as f:
        f.write("// Combined decompiled functions from multiple main functions\n")
        f.write(f"// Total main functions: {len(main_func_addrs)}\n\n")

        f.write("switch (Func)\n{\n")

        for main_func_addr in main_func_addrs:
            try:
                print(f"\n开始处理主函数: 0x{main_func_addr:X}")

                functions = extract_functions_from_array(main_func_addr)
                if not functions:
                    print(f"在主函数 0x{main_func_addr:X} 中未找到需要导出的函数！")
                    continue

                f.write(f"\n    // Main Function 0x{main_func_addr:X} Start\n")

                for index, func_name in functions:
                    try:
                        func_addr = ida_name.get_name_ea(0, func_name)
                        if func_addr == idaapi.BADADDR:
                            print(f"无法找到函数: {func_name}")
                            continue

                        # 检查函数是否已经处理过
                        if func_addr in processed_functions:
                            duplicate_count += 1
                            print(f"跳过重复函数: {func_name} (0x{func_addr:X})")
                            continue

                        # 标记为已处理
                        processed_functions.add(func_addr)

                        func = ida_funcs.get_func(func_addr)
                        if not func:
                            print(f"无法获取函数对象: {func_name}")
                            continue

                        cfunc = ida_hexrays.decompile(func)
                        if not cfunc:
                            print(f"反编译失败: {func_name}")
                            continue

                        addr = func_name[4:]
                        func_decl = get_function_declaration(str(cfunc))
                        param_casts = parse_function_parameters(func_decl)

                        f.write(f"    case 0x{addr}: // 0x{main_func_addr:X} - {index}\n    {{\n")
                        f.write(f"        // {func_decl}\n\n")

                        # 添加参数强制转换
                        if param_casts:
                            for cast in param_casts:
                                f.write(f"        {cast}\n")
                            f.write("\n")

                        f.write("      " + clean_function_body(str(cfunc)) + "\n\n")
                        f.write("        break;\n    }\n")
                        print(f"成功导出: {func_name}")

                    except Exception as e:
                        print(f"处理函数 {func_name} 时出错: {str(e)}")

                f.write(f"    // Main Function 0x{main_func_addr:X} End\n")

            except Exception as e:
                print(f"处理主函数 0x{main_func_addr:X} 时出错: {str(e)}")

        f.write("\n    default:\n    {\n        break;\n    }\n}")

    print(f"\n处理完成！")
    print(f"导出的唯一函数数: {len(processed_functions)}")
    print(f"跳过的重复函数数: {duplicate_count}")

main_func_addrs = [
    0x28A9370,
    0x28A9B40,
    0x28AB2F0,
    0x28ACAA0,
    0x28AE250,
    0x28AFAA0,
    0x28B12F0,

    0x28B2B40,
    0xAAC03F0,
    0xAAC1BA0,
    0xAAC2370
]

output_file = "E:\\DecompiledSwitch.cpp"
decompile_and_save_combined(main_func_addrs, output_file)

*/

/*

import idaapi
import ida_hexrays
import ida_funcs
import re

def replace_memory_access(code):
    """替换内存访问模式为FuckEnc::CacheRead"""
    replacements = [
        (r'\*\*\(_QWORD \*\*\)\(', 'FuckEnc::CacheReadPlural<_QWORD>('),
        (r'\*\*\(_DWORD \*\*\)\(', 'FuckEnc::CacheReadPlural<_DWORD>('),
        (r'\*\(_QWORD \*\)\(', 'FuckEnc::CacheRead<_QWORD>('),
        (r'\*\(_DWORD \*\)\(', 'FuckEnc::CacheRead<_DWORD>('),
        (r'\*\(_BYTE \*\)\(', 'FuckEnc::CacheRead<_BYTE>('),
        (r'\*\(unsigned __int8 \*\)\(', 'FuckEnc::CacheRead<unsigned __int8>('),
        (r'\*\(unsigned int \*\)\(', 'FuckEnc::CacheRead<unsigned int>('),
        (r'\*\(unsigned __int16 \*\)\(', 'FuckEnc::CacheRead<unsigned __int16>('),
    ]

    # 首先替换内存访问
    result = code
    for pattern, replacement in replacements:
        result = re.sub(pattern, replacement, result)

    # 处理函数调用的替换
    # 添加两种模式的函数调用匹配
    patterns = [
        # 模式1: 双重指针
        r'\(\*\(void \(__fastcall \*\*\)\([^)]+\)\)\((.*?)\)\)\s*\(\s*((?:[^;]|[\r\n])*?)\s*\);',
        # 模式2: 三重指针，带计算
        r'\(\*\*\(void \(__fastcall \*\*\*\)\([^)]+\)\)\((.*?)\)\)\s*\(\s*((?:[^;]|[\r\n])*?)\s*\);',
        # 模式3: 三重指针，直接访问
        r'\(\*\*\(void \(__fastcall \*\*\*\)\([^)]+\)\)\(([^)]+)\)\)\s*\(\s*((?:[^;]|[\r\n])*?)\s*\);'
    ]

    def replace_func(match):
        addr = match.group(1).strip()
        params = match.group(2).strip()
        # 规范化参数中的空白
        params = re.sub(r'\s+', ' ', params)
        # 移除参数中的多余换行和空格
        params = re.sub(r',\s+', ', ', params)
        return f'Calls::FastCall({addr}, {params});'

    # 应用所有模式
    for pattern in patterns:
        result = re.sub(pattern, replace_func, result, flags=re.DOTALL | re.MULTILINE)

    # 替换IDA符号引用为十六进制地址
    result = re.sub(r'&unk_([0-9A-Fa-f]+)', r'0x\1', result)
    result = re.sub(r'&loc_([0-9A-Fa-f]+)', r'0x\1', result)

    return result

def join_multiline_statements(lines):
    """合并多行语句但保持缩进"""
    result = []
    current_statement = []
    base_indent = ""

    for line in lines:
        stripped = line.lstrip()
        if not stripped:
            if current_statement:
                current_statement.append(line)
            else:
                result.append(line)
            continue

        current_indent = line[:len(line)-len(stripped)]

        # 如果是新语句的开始
        if not current_statement:
            base_indent = current_indent
            current_statement.append(line)
        # 如果当前行的缩进更深，或者上一行以特定字符结束
        elif (len(current_indent) > len(base_indent) or
              current_statement[-1].rstrip().endswith(('(', '{', '[', ',', '+', '-', '*', '/', '|', '&', '^'))):
            current_statement.append(line)
        else:
            # 完成当前语句
            if current_statement:
                joined = '\n'.join(current_statement)
                result.append(joined)
            current_statement = [line]
            base_indent = current_indent

    # 添加最后一个语句
    if current_statement:
        joined = '\n'.join(current_statement)
        result.append(joined)

    return result

def export_function(func_addr, output_file):
    """导出单个函数的代码并替换内存访问"""
    func = ida_funcs.get_func(func_addr)
    if not func:
        print(f"无法获取函数: {hex(func_addr)}")
        return

    # 反编译函数
    cfunc = ida_hexrays.decompile(func)
    if not cfunc:
        print(f"反编译失败: {hex(func_addr)}")
        return

    # 获取函数内容并按行分割
    content = str(cfunc)
    lines = content.split('\n')

    # 合并多行语句
    joined_lines = join_multiline_statements(lines)

    # 处理每一行，保持原始缩进
    processed_lines = []
    for line in joined_lines:
        # 计算原始缩进
        indent = len(line) - len(line.lstrip())
        indent_str = line[:indent]

        # 替换内存访问和函数调用，但保持缩进
        processed_line = replace_memory_access(line[indent:])
        processed_lines.append(indent_str + processed_line)

    # 写入文件，完全保留原始格式
    with open(output_file, 'w', encoding='utf-8') as f:
        for line in processed_lines:
            f.write(f"{line}\n")

    print(f"函数已导出到: {output_file}")

# 使用示例
func_addr = 0x2834A10 # 这里填入要导出的函数地址
output_file = "E:\\DecompiledFunction.cpp"
export_function(func_addr, output_file)
*/
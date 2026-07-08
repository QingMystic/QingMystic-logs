# QingMystic-logs

[![stars](https://badgen.net/github/stars/QingMystic/QingMystic-logs)](https://github.com/QingMystic/QingMystic-logs/stargazers)
[![forks](https://badgen.net/github/forks/QingMystic/QingMystic-logs)](https://github.com/QingMystic/QingMystic-logs/network/members)
[![issues](https://badgen.net/github/issues/QingMystic/QingMystic-logs)](https://github.com/QingMystic/QingMystic-logs/issues)
[![license](https://badgen.net/github/license/QingMystic/QingMystic-logs)](https://github.com/QingMystic/QingMystic-logs/blob/main/LICENSE)
[![release](https://badgen.net/github/release/QingMystic/QingMystic-logs)](https://github.com/QingMystic/QingMystic-logs/releases)
[![last commit](https://badgen.net/github/last-commit/QingMystic/QingMystic-logs)](https://github.com/QingMystic/QingMystic-logs/commits/main)
[![C++](https://badgen.net/badge/C++/17/blue?icon=github)](https://isocpp.org/)
[![platform](https://badgen.net/badge/platform/Windows/lightgrey)](https://github.com/QingMystic/QingMystic-logs)
### 功能特性

- 四个日志级别：info / warn / error / debug
- 支持 std::string / std::wstring / char*
- 支持单条和批量（vector）日志
- 自动生成时间戳 [YYYY.MM.DD][HH:MM:SS]
- 错误级别用 std::cerr，其他用 std::clog
- 轻量级，仅依赖 C++ 标准库和 Windows API

---

### 快速开始

```cpp
#include "logs.h"

int main() {
    logs::info("程序已启动");
    logs::warn("内存使用率偏高");
    logs::error("文件打开失败");
    logs::debug("调试信息：变量 x = 100");
    
    // 批量日志
    std::vector<std::string> msgs = {"步骤1完成", "步骤2完成", "步骤3完成"};
    logs::info(msgs);
    
    return 0;
}
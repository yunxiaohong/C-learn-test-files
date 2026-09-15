# C 语言练习

学习 C 语言过程中写的一些小程序。`src/` 下的每个 `.c` 基本都是一个独立程序，各自带 `main`。

## 目录结构

```
C-learn-test-files/
├── src/                # 源代码
├── include/            # 头文件（公共模块的函数声明）
├── bin/                # 编译产物
├── compile_flags.txt   # 编辑器 IntelliSense 使用的编译参数
└── .vscode/            # VS Code 构建 / 调试配置
```

## 环境要求

- gcc：Cygwin 版，实测版本 14.4.0
- gdb：调试用，与 gcc 同属 Cygwin

## 编译与运行

### 命令行

需要**在项目根目录**执行，`-Iinclude` 才能找到头文件：

```bash
gcc -Wall -std=gnu17 -g -Iinclude src/<文件名>.c src/factorial.c src/put_array.c -o bin/<文件名>.exe
bin/<文件名>.exe
```

例如：

```bash
gcc -Wall -std=gnu17 -g -Iinclude src/yang_huis_triangle.c src/factorial.c src/put_array.c -o bin/yang_huis_triangle.exe
bin/yang_huis_triangle.exe
```

### VS Code

| 快捷键 | 效果 |
| --- | --- |
| `Ctrl+Shift+B` | 编译当前打开的文件 |
| `F5` | 编译并用 gdb 调试 |
| `Ctrl+F5` | 编译并运行（不挂调试器） |

按 `Ctrl+Shift+P` 执行 `Tasks: Run Task` → `run`，可编译并在集成终端里运行。

## 练习列表

| 文件 | 说明 |
| --- | --- |
| `yang_huis_triangle.c` | 杨辉三角 |
| `yang_huis_triangle_more_beatiful.c` | 杨辉三角（居中对齐版） |
| `GC_test.c` | 验证哥德巴赫猜想（4 ~ 114514） |
| `array_put_main.c` | 一维数组与二维数组的打印 |
| `str_test.c` | 字符串操作：统计英文字母个数、`strcpy`、`strcat` |
| `mallo_and_free.c` | `malloc` 申请堆内存 |
| `main_parameter_test.c` | 命令行参数 |
| `factorial.c` | 阶乘（公共模块，无 `main`） |
| `put_array.c` | 数组打印函数（公共模块，无 `main`） |

## 注意事项

- `factorial.c` 和 `put_array.c` 是**公共模块**，本身没有 `main`，不能单独编译成程序，必须和被调用的程序一起链接，否则会报 `undefined reference to 'xxx'`。
- 编译必须在项目根目录进行；如果在 `src/` 目录下编译，路径要相应调整：`-I../include`、输出改为 `../bin/xxx.exe`。
- 需要键盘输入的程序（如 `str_test.c`）请在**集成终端**里运行，调试控制台（`F5`）不支持输入。
- 头文件在 `include/`，新增源文件时记得同步更新 `.vscode/tasks.json` 里的公共模块列表。


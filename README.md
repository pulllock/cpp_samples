# cpp_samples
c++ samples

# 版本

C++ 11

# 头文件命名约定

- C++旧式风格，以`.h`结尾，C++程序可以使用，比如：`iostream.h`
- C旧式风格，以`.h`结尾，C和C++都可以使用，比如：`math.h`
- C++新式风格，没有扩展名，C++程序可以使用，使用`namespace std`，比如：`iostream`
- 转换后的C，加上前缀c，没有扩展名，C++程序可以使用，可以使用不是C的特性：`namespace std`，比如：`cmath`

# 类（class）

- [类](./class/main.cpp)

# 命名空间

namespace，命名空间可以是全局的，也可以位于另外一个命名空间中，但不能位于代码块中。在默认情况下命名空间中声明的名称的连接性为外部的。

- using声明，使特定的标识符可用
- using编译指令，使整个命名空间可用

# 整形

- `unsigned long`
- `long`
- `unsigned int`
- `int`
- `unsigned short`
- `short`
- `char`
- `unsigned char`
- `signed char`
- `bool`
- `unsigned long long`
- `long long`

# 常量

- `const`

# 浮点类型

- `float`
- `double`
- `long double`

# 数组

# string

# struct

结构

# union

共用体union是一种数据格式，能够存储不同的数据类型，但只能同时存储其中的一种类型，常用于节省内存。

```c++
union unionDemo {
    int int_val;
    long long_val;
    double double_val;
};
```

# 枚举


# 指针


# new vs delete


# 动态数组

使用new创建动态数组

```c++
// 创建动态数组
int * dynamic_array = new int[10];

// 访问动态数组元素
dynamic_array[1];

// 释放动态数组内存
delete [] dynamic_array;
```

# 动态结构

使用new创建动态结构

```c++
struct structDemo {
    int int_val;
    double double_val;
};

// 创建动态结构
structDemo * sd = new structDemo;

// 访问动态结构成员
sd->int_val;

// 访问动态结构成员
(*sd).int_val;

// 释放动态结构内存
delete sd;
```

# 自动存储、静态存储、动态存储

- 自动存储：在函数内部定义的常规变量使用自动存储空间，被称为自动变量，在所属函数被调用时自动产生，在函数结束时消亡
- 静态存储：是在整个程序执行期间都存在的存储方式，变量成为静态的方式有两种：一种是在函数外面定义；一种是在声明变量时使用static关键字
- 动态存储：使用new和delete来分配内存和释放内存

# 存储持续性

C++11有四种不同方案存储数据：

- 自动存储持续性：在函数定义中声明的变量，包括函数参数，这些变量的存储持续性为自动的，在所属函数或代码块执行的时候创建，执行完后使用的内存被自动释放
- 静态存储持续性：在函数外定义的变量和使用关键字static定义的变量的存储持续性为静态，在整个程序运行期间都存在
- 动态存储持续性：使用new分配的内存一直存在，直到使用delete将其释放或者程序结束运行，这种内存的存储持续性为动态，也被称为自由存储或堆
- 线程存储持续性：如果变量使用thread_local声明，则生命周期和所属线程一样

# 模板类vector

vector是动态数组的替代，使用：`vector<int> vi(5)`，vector功能比数组强大，但效率低

# 模板类array

模板类array和数组一样，长度固定，使用静态内存分配，效率和数组一样，是定长数组的替代品，使用：`array<int, 5> arr;`

# 字符函数库cctype


# 文件IO

- 头文件`fstream`
- 输出类`ofstream`
- 输入类`ifstream`

# 函数模板

```c++
// 建立一个模板，类型命名为T
template <typename T>

// 函数原型
void someFunction(T &a);

// 函数定义
void someFunction(T &a) {
    
}
```

# 头文件

头文件中常包含的内容：

- 函数原型
- 使用#define或const定义的符号常量
- 结构声明
- 类声明
- 模板声明
- 内联函数

包含头文件时有两种方式：

- 使用双引号：C++编译器会先在当前的工作目录或源代码目录查找，如果没有找到，则在标准位置查找。在包含自己的头文件时应该使用双引号
- 使用尖括号：C++编译器会在存储标准头文件的位置查找
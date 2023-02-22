#include <iostream>

// 函数原型
void customFunction(int);

int main() {
    // 调用自定义函数
    customFunction(1);

    return 0;
}

/**
 * 自定义函数实现
 * @param n
 */
void customFunction(int n) {
    using namespace std;
    cout << "custom function: " << n << endl;
}

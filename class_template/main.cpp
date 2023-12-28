#include <iostream>
#include "Compare.h"

int main() {
    std::cout << "Class template：" << std::endl;
    std::cout << "Max for int: " + std::to_string(Compare<int>(3, 9).max()) << std::endl;
    std::cout << "Min for int: " + std::to_string(Compare<int>(3, 9).min()) << std::endl;

    std::cout << "Max for float: " + std::to_string(Compare<float>(3.0, 9.6).max()) << std::endl;
    std::cout << "Min for float: " + std::to_string(Compare<float>(3.0, 9.6).min()) << std::endl;
    return 0;
}

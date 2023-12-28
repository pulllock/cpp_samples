#include <iostream>
#include "User.h"

int main() {
    std::cout << "Class：" << std::endl;

    int age = 3;
    User user = User(age, "xiao ming");
    std::cout << "User.getAge() = " + std::to_string(user.getAge()) << std::endl;
    return 0;
}

#ifndef CLASS_USER_H
#define CLASS_USER_H

#include <string>

/**
 * 类定义/类声明
 */
class User {

// 私有成员
private:
    // 成员名定义时使用_后缀
    long id_;
    // 成员名定义时使用m_前缀
    int m_age;
    std::string name_;

// 公有成员
public:
    // 构造函数
    User();
    // 使用explicit指明构造函数不能用作隐式类型转换，只能用于初始化和显式类型转换
    explicit User(int age);
    User(int age, std::string name);
    // 有默认参数的构造函数
    User(long id = -1, int age = 0, std::string name = "");
    long getId();
    int getAge();
    std::string getName();
    // inline类型函数
    inline int calculateAge(int age);
    // 析构函数
    ~User();
};

// inline函数需要将函数定义和成员函数的定义都放在同一个头文件中
inline int User::calculateAge(int age) {
    if (age < 5) {
        return 0;
    }

    return age;
}

#endif //CLASS_USER_H

#include "User.h"

User::User(int age, std::string name) {
    age = calculateAge(age);
    m_age = age;
    name_ = name;
}

long User::getId() {
    return id_;
}

int User::getAge() {
    return m_age;
}

std::string User::getName() {
    return name_;
}

User::~User() {

}
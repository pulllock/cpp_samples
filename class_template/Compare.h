#ifndef CLASS_TEMPLATE_COMPARE_H
#define CLASS_TEMPLATE_COMPARE_H

// 声明一个模板，虚拟类型名为T
template <class T>
class Compare {
private:
    T x;
    T y;
public:
    Compare(T a, T b) {
        x = a;
        y = b;
    }

    T max() {
        return (x > y) ? x : y;
    }

    T min() {
        return (x < y) ? x : y;
    }
};


#endif //CLASS_TEMPLATE_COMPARE_H

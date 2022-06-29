#include <iostream>
using namespace std;

/* 算数运算符 */
int main() {

    system("chcp 65001");

    // 加减乘除运算
    int a1 = 10;
    int b1 = 3;

    cout << "a1 + b1 = " << a1 + b1 << endl;
    cout << "a1 - b1 = " << a1 - b1 << endl;
    cout << "a1 * b1 = " << a1 * b1 << endl;
    cout << "a1 / b1 = " << a1 / b1 << endl; // C++中，两个整数相除，得到的是整数，将小数部分去除

    int a2 = 10;
    int b2 = 20;
    cout << "a2 / b2 = " << a2 / b2 << endl; // 结果为0

    int a3 = 10;
    int b3 = 0;
    // cout << "a3 / b3 = " << a3 / b3 << endl; // 除数不可以为0，否则报错

    // 两小数相除
    double d1 = 0.5;
    double d2 = 0.25;
    cout << "d1 / d2 = " << d1 / d2 << endl; // 结果为2, 小数相除结果也可以是小数

    system("pause");
    return 0;
}

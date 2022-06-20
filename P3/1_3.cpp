#include <iostream>
using namespace std;

/* 算数运算符 */
int main() {

    system("chcp 65001");

    // 前置递增
    int a = 10;
    ++a;
    cout << "a = " << a << endl;

    // 后置递增
    int b = 10;
    b++;
    cout << "b = " << b << endl;

    // 前置 后置区别
    // 前置：先+1 然后再进行表达式运算
    // 后置：先进行表达式运算，然后再+1

    int a2 = 10;
    int b2 = ++a2 * 10;
    cout << "a2 = " << a2 << endl;
    cout << "b2 = " << b2 << endl;

    int a3 = 10;
    int b3 = a3++ * 10;
    cout << "a3 = " << a3 << endl;
    cout << "b3 = " << b3 << endl;

    system("pause");
    return 0;
}

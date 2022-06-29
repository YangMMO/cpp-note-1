#include <iostream>
using namespace std;

/* 算数运算符 */
int main() {

    system("chcp 65001");

    // 取模(求余数)
    int a1 = 10;
    int b1 = 3;

    cout << "a1 % b1 = " << a1 % b1 << endl;

    int a2 = 10;
    int b2 = 20;

    cout << "a2 % b2 = " << a2 % b2 << endl;

    int a3 = 10;
    int b3 = 0;

    // cout << "a3 % b3 = " << a3 % b3 << endl; // 除数不可以为0，否则报错

    // 两小数不可以做取模运算
    double d1 = 3.14;
    double d2 = 1.1;

    // cout << "d1 % d2 = " << d1 % d2 << endl;    // 报错

    system("pause");
    return 0;
}

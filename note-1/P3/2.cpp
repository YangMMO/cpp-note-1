#include <iostream>
using namespace std;

/* 赋值运算符 */
int main() {

    system("chcp 65001");

    // =
    int a = 10;
    a = 100;
    cout << "a = " << a << endl;

    // +=
    a = 10; // 重置a的值
    a += 2;
    cout << "a = " << a << endl;

    // -=
    a = 10; // 重置a的值
    a -= 2;
    cout << "a = " << a << endl;

    // *=
    a = 10; // 重置a的值
    a *= 2;
    cout << "a = " << a << endl;


    // /=
    a = 10; // 重置a的值
    a /= 2;
    cout << "a = " << a << endl;


    // %=
    a = 10; // 重置a的值
    a %= 2;
    cout << "a = " << a << endl;
    
    system("pause");
    return 0;
}

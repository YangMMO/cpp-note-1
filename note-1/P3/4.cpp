#include <iostream>
using namespace std;

/* 逻辑运算符 */
int main() {

    system("chcp 65001");

    // !
    int a = 10;
    cout << "!a = " << !a << endl;   // 0
    cout << "!!a = " << !!a << endl;  // 1

    // &&
    int b = 10;
    int c = 20;
    int d = 0;
    int e = 0;
    cout << "a && b = " << (a && b) << endl;    // 1
    cout << "a && c = " << (a && c) << endl;    // 1
    cout << "a && d = " << (a && d) << endl;    // 0
    cout << "d && e = " << (d && e) << endl;    // 0

    // ||
    cout << "a || b = " << (a || b) << endl;    // 1
    cout << "a || c = " << (a || c) << endl;    // 1
    cout << "a || d = " << (a || d) << endl;    // 1
    cout << "d || e = " << (d || e) << endl;    // 0

    system("pause");
    return 0;
}

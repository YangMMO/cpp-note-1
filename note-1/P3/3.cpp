#include <iostream>
using namespace std;

/* 比较运算符 */
int main() {

    system("chcp 65001");

    // ==
    int a = 10;
    int b = 20;
    cout << "a == b = " << (a == b) << endl;    // 优先级加()

    // !=
    cout << "a != b = " << (a != b) << endl;

    // >
    cout << "a > b = " << (a > b) << endl;

    // <
    cout << "a < b = " << (a < b) << endl;

    // >=
    cout << "a >= b = " << (a >= b) << endl;

    // <=
    cout << "a <= b = " << (a <= b) << endl;

    
    system("pause");
    return 0;
}

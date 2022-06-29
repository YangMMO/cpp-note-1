#include <iostream>
using namespace std;

/* 函数的调用 */

// 定义的num没有数据，这是形式上的参数，成为形参
int add(int num1, int num2){
    return num1 + num2;
}


int main() {
    system("chcp 65001");

    int a = 1;
    int b = 5;

    // 传入的有实际数据，成为实参
    int c = add(a, b);
    cout << c << endl;

    a = 20;
    b = 30;
    c = add(a, b);
    cout << c << endl;

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

/* 三目运算符 */
int main() {

    system("chcp 65001");

    // 创建三个变量
    // a与b作比较，将大的值赋给c
    int a = 10;
    int b = 20;
    int c = 0;

    c = (a > b ? a : b);
    cout << "c值为：" << c << endl;

    // 在C++中，三目运算符返回的是变量，可以继续赋值
    (a > b ? a : b) = 100;
    cout << "a值为：" << a << endl;
    cout << "b值为：" << b << endl;

    // 上述因为最终返回的是b，所以 (b) = 100

    system("pause");
    return 0;
}

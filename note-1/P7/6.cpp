#include <iostream>
using namespace std;

// 实现两个数字进行交换
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "swap a为：" << a << endl;
    cout << "swap b为：" << b << endl;
}

void swap02(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

/* 指针和函数 */
int main() {
    system("chcp 65001");

    // 1. 值传递
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "s1 a为：" << a << endl;
    cout << "s1 b为：" << b << endl;

    // 2. 地址传递
    // 如果是地址传递，可以修改实参
    swap02(&a, &b);
    cout << "s2 a为：" << a << endl;
    cout << "s2 b为：" << b << endl;

    system("pause");
    return 0;
}

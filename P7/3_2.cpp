#include <iostream>
using namespace std;

/* 空指针和野指针 */
int main() {
    system("chcp 65001");

    // 野指针
    // 相当于访问了一个没有声明的地址，超越界限
    // 程序中尽量避免野指针
    int * p = (int *)0x12345678;

    cout << "*p为：" << *p << endl;

    system("pause");
    return 0;
}

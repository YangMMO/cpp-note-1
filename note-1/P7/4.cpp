#include <iostream>
using namespace std;

/* const修饰指针 */
int main() {
    system("chcp 65001");

    // 1. const修饰指针 — 常量指针
    int a = 10;
    int b = 10;

    const int *p = &a; //指向可以改，值不可以改
    // *p = 20; //错误
    p = &b; //正确


    // 2. const修饰常量 — 指针常量
    int * const p2 = &a;
    *p2 = 20; //正确
    // p2 = &b; //错误


    // 3. const既修饰指针，又修饰常量
    const int * const p3 = &a;
    // *p3 = 20; //错误
    // p3 = &b; //错误

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

/* 指针变量的定义和使用 */
int main() {
    system("chcp 65001");

    // 1.定义指针 ,将a指向的地址赋值给指针变量p
    int a = 10;

    // 指针定义的语法：数据类型 * 变量名
    // 只创建了指针变量
    int * p;

    // 让指针记录变量a的地址
    p = &a;

    cout << "a为：" << &a << endl;
    cout << "p为：" << p << endl;

    // 2.使用指针
    // 通过解引用的方式来找到指针指向的内存
    // 指针前加*代表解引用，找到指针指向的内存中的数据
    *p = 20;
    cout << "a为：" << a << endl;
    cout << "p为：" << *p << endl;

    system("pause");
    return 0;
}

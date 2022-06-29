#include <iostream>
using namespace std;

/* 空指针和野指针 */
int main() {
    system("chcp 65001");

    // 空指针
    // 1. 空指针用于给指针变量进行初始化
    int * p = NULL;

    // 2. 空指针是不可以进行访问的
    // 0~255系统占用，不可访问
    *p = 100;

    system("pause");
    return 0;
}

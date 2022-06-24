#include <iostream>
using namespace std;

/* 函数的分文件编写 */
// swap.h
// swap.cpp

// 使用 .h 头文件，即可调用
#include "swap.h"

int main()
{
    system("chcp 65001");

    int a = 10;
    int b = 20;

    swap(10, 20);

    system("pause");
    return 0;
}


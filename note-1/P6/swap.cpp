// 使用swap.h头文件
#include "swap.h"

// 函数定义
void swap(int num1, int num2)
{
    cout << "交换前：" << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "交换后：" << endl;
    cout << num1 << endl;
    cout << num2 << endl;

    // return; 需要返回值可不写return
}
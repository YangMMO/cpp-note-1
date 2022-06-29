#include <iostream>
using namespace std;

/* 函数的声明 */

// 函数提前声明
// 部分编辑器有先后顺序，得先有声明，此处仅声明，未定义，告诉编辑器该函数存在
// 所以声明可以多次，定义只能一次
int max(int a, int b);
int max(int a, int b);

int main()
{
    system("chcp 65001");

    int a = 100;
    int b = 200;

    max(a,b);
    cout << max(a, b) << endl;

    system("pause");
    return 0;
}

// 函数的定义
// 返回大值
int max(int a, int b)
{
    return a > b ? a : b;
}
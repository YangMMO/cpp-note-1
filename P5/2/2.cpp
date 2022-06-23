#include <iostream>
using namespace std;

/* 二维数组数组名 */
int main() {

    system("chcp 65001");

    // 1.查看二维数组所占内存空间
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "二维数组占用空间为：" << sizeof(arr) << endl;
    cout << "二维数组第一行占用空间为：" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素占用空间为：" << sizeof(arr[0][0]) << endl;

    // 计算行列
    // 总长度 / 行空间
    cout << "行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
    // 行长度 / 单个元素空间
    cout << "列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

    // 2.获取二维数组首地址
    cout << "二维数组首地址为：" << (long long)arr << endl;
    cout << "二维数组第一行地址为：" << (long long)arr[0] << endl;
    cout << "二维数组第二行地址为：" << (long long)arr[1] << endl;

    // 取元素需要用&取址符
    cout << "二维数组第一个元素地址为：" << (long long)&arr[0][0] << endl;
    cout << "二维数组第一个元素地址为：" << (long long)&arr[0][1] << endl;

    system("pause");
    return 0;
}

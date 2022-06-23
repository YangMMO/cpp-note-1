#include <iostream>
using namespace std;

/* 一维数组定义方式 */
int main() {

    system("chcp 65001");

    // 数组特典
    // 放在一块连续的内存空间中
    // 数组每个元素都是相同的数据类型

    // 1.数据类型 数组名[ 数组长度 ];
    //利用下标赋值 从0开始
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[5] = 40;
    cout << arr[0] << endl;


    // 2.数据类型 数组名[ 数组长度 ] = { 值1，值2 ...};
    // 如果{}没有赋值长度下标数据，剩余数据用0补全
    int arr2[5] = {10,20,30,40,50};
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << endl;
    }


    // 3.数据类型 数组名[ ] = { 值1，值2 ...};
    // 声明空[]必须有赋值初始长度
    int arr3[] = {9,8,7,6,5,4,3,2,1,1};
    for (int i = 0; i < 10; i++)
    {
        cout << arr3[i] << endl;
    }

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

/* 一维数组 案例 */
int main() {

    system("chcp 65001");

    // 实现元素逆置
    int arr[5] = {1,3,2,5,4};
    cout << "逆置前：" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    int start = 0;  // 起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1; // 结束下标

    while (start < end)
    {
        int temp = arr[start];     // 创建临时数据作为存储
        arr[start] = arr[end]; // 互换
        arr[end] = temp;       // 互换

        start++; // 更新下标
        end--;
    }

    cout << "逆置后：" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << endl;
    }

    system("pause");
    return 0;
}

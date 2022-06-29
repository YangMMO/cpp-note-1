#include <iostream>
using namespace std;

/* 冒泡排序 */
int main() {

    system("chcp 65001");

    // 冒泡升序
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    cout << "排序前：" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;


    // 排序多少轮 = 数组长度 - 1
    // 每轮对比多少次数 = 数组长度 - （当前排序轮数） - 1

    // 排序多少轮
    int num = sizeof(arr) / sizeof(arr[0]) - 1;  
    for (int i = 0; i < num; i++)
    {
        /* 每轮对比多少次 */
        int contrast = num - i - 1;
        for (int j = 0; j < contrast; j++)
        {
            /* 数1 比 数2 大 则交互 */
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
        
    }

    cout << "排序后：" << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

/* 指针和数组 */
int main() {
    system("chcp 65001");

    // 利用指针访问数组的元素
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "arr[0]为：" << arr[0] << endl;

    int * p = arr;  // arr就是数组的首地址

    cout << "利用指针访问第一个元素：" << *p << endl;

    p++;    //则等于第二个元素，偏移4字节

    cout << "利用指针访问第二个元素：" << *p << endl;


    // 利用指针遍历数组
    int * p2 = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << "arr[" << i << "]为：" << *p2 << endl;
        p2++;
    }
    

    system("pause");
    return 0;
}

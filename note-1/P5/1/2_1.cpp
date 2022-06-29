#include <iostream>
using namespace std;

/* 一维数组数组名 */
int main() {

    system("chcp 65001");

    // 1.可以统计整个数组在内存中的长度
    //利用下标赋值 从0开始
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "内存空间多大：" << sizeof(arr) << endl; // 40, 因为int 4字节 = 4*10
    cout << "每个元素多大：" << sizeof(arr[0]) << endl; // 4
    cout << "元素个数：" << sizeof(arr)  / sizeof(arr[0]) << endl; // 10

    // 2.可以获取数组在内存中的首地址
    // 如果{}没有赋值长度下标数据，剩余数据用0补全
    cout << "数组首地址：" << arr << endl;  // 16进制

    // 以10进制查看 (int) 此处报错使用了(long long)
    // 两种输出结果一样，因为十进制是首地址，即为第一个元素的地址
    // 取元素需要用 & 取址符
    cout << "十进制地址：" << (long long)arr << endl; 
    cout << "第一个元素的地址：" << (long long)&arr[0] << endl;
    cout << "第一个元素的地址：" << (long long)&arr[1] << endl; // 已[0]相差4字节

    // arr = 100 // 注意：数组名是常量，不可以赋值

    system("pause");
    return 0;
}

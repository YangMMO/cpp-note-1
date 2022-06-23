#include <iostream>
using namespace std;

/* 值传递 */

// 两个数字进行交换
// void 不需要返回值
void swap(int num1, int num2){
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


int main() {
    system("chcp 65001");

    int a = 1;
    int b = 5;
    cout << "a=" << a << endl; // 1
    cout << "b=" << b << endl; // 5

    swap(a,b);

    // 不会改变实参, 因为值传递时，会开辟一块新的内存空间
    cout << "a=" << a << endl; // 1
    cout << "b=" << b << endl; // 5


    system("pause");
    return 0;
}

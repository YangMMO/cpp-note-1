#include <iostream>
using namespace std;

/* 字符型 */
int main()
{
    // 创建方式
    char ch = 'a';
    cout << "ch = " << ch << endl;
    cout << "sizeof char = " << sizeof(char) << endl;

    // 错误写法
    // char ch1 = "a";  // ""双引号
    // char ch2 = 'abc'; // 字符溢出

    // 对应ASCII编码
    // 强转为int
    // a - 97
    // A - 65
    cout << "ch = " << (int)ch << endl;


    system("pause");
    return 0;
}

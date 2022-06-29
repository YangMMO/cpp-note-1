#include <iostream>
using namespace std;

/* 整型 */
int main()
{
    // 短整型 (-32768 ~ 32767)
    // 2字节
    // 如果=32768，则会输出-32768，从负数开始算起，
    // 如果=32769，则会输出-32767，从负数递增+1
    short num1 = 32768;

    // 整型 (-2147483648 ~ 2147483647)
    // 4字节
    int num2 = 10;

    // 长整型 (-2147483648 ~ 2147483647)
    // Windows为4字节，Linux为4字节(32位)，8字节(64位)
    long num3 = 10;

    // 长长整型 （-9223372036854775808 ~ 9223372036854775807）
    // 8字节
    long long num4 = 10;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    system("pause");
    return 0;
}

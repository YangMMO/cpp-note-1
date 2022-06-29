#include <iostream>
#include <string>   //注意引用string头文件

using namespace std;

/* 数据的输入 */
int main()
{
    system("chcp 65001"); //设置cmd输出中文乱码问题

    // 整型
    int a = 0;
    cout << "输入整数：" << endl;
    cin >> a;
    cout << "a = " << a << endl;

    // 浮点
    float f = 3.14f;
    cout << "输入浮点数：" << endl;
    cin >> f;
    cout << "f = " << f << endl;

    // 字符型
    char ch = 'a';
    cout << "输入字符：" << endl;
    cin >> ch;
    cout << "ch = " << ch << endl;

    // 字符串型
    string str = "hello world";
    cout << "输入字符串：" << endl;
    cin >> str;
    cout << "str = " << str << endl;

    // 布尔 （输入非0代表真）
    bool b = true;
    cout << "输入布尔值：" << endl;
    cin >> b;
    cout << "b = " << b << endl;


    system("pause");
    return 0;
}

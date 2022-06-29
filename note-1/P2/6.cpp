#include <iostream> // <iostream> 隐式包含string头文件，但建议单独使用string头文件
using namespace std;

#include <string> //使用C++风格字符串，需要包含string头文件

/* 字符串型 */
int main()
{

    // C风格
    // 变量名后加[]
    // 使用的是双引号""
    char str[] = "hello world";
    cout << str << endl;

    // C++风格
    // 使用的是双引号""
    // 需要使用头文件
    string str1 = "hello world";
    cout << str1 << endl;
    

    system("pause");
    return 0;
}

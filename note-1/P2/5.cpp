#include <iostream>
using namespace std;

/* 转义字符 */
int main()
{

    // 换行
    cout << "hello world\n";

    // 反斜杠
    cout << "\\" << endl;

    // 水平制表 输出8个字符为一个对齐位置，整齐的输出数据
    cout << "aaaaaa\thello world" << endl;
    cout << "aaa\thello world" << endl;
    cout << "aaaaa\thello world" << endl;

    system("pause");
    return 0;
}

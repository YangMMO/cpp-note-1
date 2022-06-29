#include <iostream>
using namespace std;

/* 标识符命名规则 */

int main()
{

    /* 标识符不能是关键字 */
    // int int  = 10;

    /* 标识符只能由字幕、数字、下划线组成 */
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;

    /* 第一个字符必须为字母或下划线 */
    // int 123abc = 10;

    
    /* 标识符中字母区分大小写 */
    int aaa = 100;
    cout << aaa << endl;
    // cout << AAA << endl;

    system("pause");

    return 0;
}

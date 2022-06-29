#include <iostream>
using namespace std;

/* 嵌套循环 案例 */
int main() {

    system("chcp 65001");

    // 乘法口诀
    for (int i = 1; i <= 9; i++)
    {
        // cout << i << endl;
        for (int j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << j*i << "  ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}

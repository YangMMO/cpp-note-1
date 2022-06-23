#include <iostream>
using namespace std;

/* do...while */
int main() {

    system("chcp 65001");

    // do while 先执行一次，再判断循环
    // 输出 0~9
    int num = 0;

    do
    {
        cout << num << endl;
        num++;
    } while (num < 10);
    

    system("pause");
    return 0;
}

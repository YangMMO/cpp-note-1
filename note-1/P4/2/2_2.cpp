#include <iostream>
using namespace std;

/* do...while案例 */
int main() {

    system("chcp 65001");

    // 水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
    // 例如：1^3 + 5^3+ 3^3 = 153

    // 打印 三位数
    int num = 100;
    
    do
    {
        // 获取个十百
        int a = 0;  //个
        int b = 0;  //十
        int c = 0;  //百

        a = num % 10;
        b = (num / 10) % 10;
        c = num / 100;

        // 如果是水仙花数才打印
        if (a*a*a + b*b*b + c*c*c == num)
        {
            cout << num << endl;
        }
        
        num++;
    } while (num < 1000);
    
    
    system("pause");
    return 0;
}

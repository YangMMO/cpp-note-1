#include <iostream>
using namespace std;

/* continue */
int main() {
    system("chcp 65001");

    for (int i = 0; i < 100; i++)
    {
        // 基数输出
        if (i % 2 ==0)
        {
            continue;   // 跳过该次循环
        }
        
        cout << i << endl;
    }
    
    

    system("pause");
    return 0;
}

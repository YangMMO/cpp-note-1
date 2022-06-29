#include <iostream>
using namespace std;

#include <ctime>    //time头文件

/* while练习 */
int main() {

    system("chcp 65001");

    // 猜数字
    // 添加随机种子，利用系统时间生成，防止伪随机
    srand( (unsigned)time(NULL) );

    // 生成随机数
    int num = rand()%100 + 1;  //0~99随机数 + 1
    // cout << num << endl;

    // 玩家猜测
    int val = 0;

    // 判断
    // 循环判断开关，默认一直循环
    while (1)
    {
        cin >> val; // 循环输入

        if (val > num)
        {
            cout << "过大" << endl;
        }
        else if (val < num)
        {
            cout << "过小" << endl;
        }
        else
        {
            cout << "对了" << endl;
            break;  // 跳出循环
        }
        
    }
    
    
    
    


    // 对 退出游戏
    // 错 提示 返回猜测
    

    system("pause");
    return 0;
}

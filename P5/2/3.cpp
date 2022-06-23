#include <iostream>
using namespace std;
#include <string>

/* 考试成绩统计 */
int main() {

    system("chcp 65001");

    // 创建二维数组
    int scores[3][3] = {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}
    };

    string name[3] = {"张三","李四","王五"};
    // 统计
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += scores[i][j];
            // cout << sum;
            // cout << scores[i][j] << "  ";
        }
        // 输出字符串需要include string
        cout << name[i] << " 分数：" << sum << endl;
    }
    

    system("pause");
    return 0;
}

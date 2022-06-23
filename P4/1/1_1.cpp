#include <iostream>
using namespace std;

/* 选择结构 */
int main() {

    system("chcp 65001");

    // 单行if
    //用户输入分数，如果大于600，则输出

    // 输入
    int score = 0;
    cout << "请输入分数：" << endl;
    cin >> score;

    // 打印用户输入的分数
    cout << "用户输入的分数为：" << score << endl;

    // 判断分数是否大于600
    if (score > 600) {
        cout << "分数大于600" << endl;
    }

    
    system("pause");
    return 0;
}

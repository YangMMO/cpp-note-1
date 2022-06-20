#include <iostream>
using namespace std;

/* 选择结构 */
int main() {

    system("chcp 65001");

    // 多条件if
    //用户输入分数，如果大于600，则输出1，大于500，则输出2，大于400，则输出3，小于等于400 输出 4

    // 输入
    int score = 0;
    cout << "请输入分数：" << endl;
    cin >> score;

    // 打印用户输入的分数
    cout << "用户输入的分数为：" << score << endl;

    // 判断分数是否大于600
    if (score > 600) {
        cout << "1" << endl;
    } else if (score > 500) {
        cout << "2" << endl;
    } else if (score > 400) {
        cout << "3" << endl;
    } else {
        cout << "4" << endl;
    }


    system("pause");
    return 0;
}

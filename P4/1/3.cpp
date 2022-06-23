#include <iostream>
using namespace std;

/* switch语句 */
int main() {

    system("chcp 65001");

    // 提示输入
    cout << "请打分" << endl;

    // 提示打分
    int score = 0;
    cin >> score;
    cout << "打分为:" << score << endl;

    // switch
    switch (score) {
        case 10:
            /* todo */
            cout << "nice" << endl;
            break;  //退出分支

        case 9:
            cout << "very good" << endl;
            break;

        case 8:
            cout << "good" << endl;
            break;

        case 7:
            cout << "oh" << endl;
            break;

        default:
            cout << "shit" << endl;
            break;
    }


    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

/* 选择结构 */
int main() {

    system("chcp 65001");

    // 输入三只小猪体重，用if判断谁最重

    int xiaozhu1 = 0;
    int xiaozhu2 = 0;
    int xiaozhu3 = 0;

    cout << "请输入小猪1的重量：" << endl;
    cin >> xiaozhu1;

    cout << "请输入小猪2的重量：" << endl;
    cin >> xiaozhu2;

    cout << "请输入小猪3的重量：" << endl;
    cin >> xiaozhu3;

    // 打印用户输入的三只小猪的重量
    cout << "小猪1的重量为：" << xiaozhu1 << endl;
    cout << "小猪2的重量为：" << xiaozhu2 << endl;
    cout << "小猪3的重量为：" << xiaozhu3 << endl;

    // 判断三只小猪重量的大小
    if (xiaozhu1 > xiaozhu2 && xiaozhu1 > xiaozhu3) {
        cout << "小猪1最重" << endl;
    } else if (xiaozhu2 > xiaozhu1 && xiaozhu2 > xiaozhu3) {
        cout << "小猪2最重" << endl;
    } else {
        cout << "小猪3最重" << endl;
    }
    

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

/* goto */
int main() {
    system("chcp 65001");

    cout << "1" << endl;

    cout << "2" << endl;
    goto FLAG;  // 会跳过 3 4 直接到 5 的位置

    cout << "3" << endl;

    cout << "4" << endl;

    FLAG:
    cout << "5" << endl;

    system("pause");
    return 0;
}

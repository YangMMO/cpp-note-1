#include <iostream>
using namespace std;

/* break */
int main() {
    system("chcp 65001");

    // switch break
    int select = 0;
    cout << "请输入：" << endl;
    cin >> select;

    switch (select)
    {
    case 1:
        int select = 0;
        cout << "结果为：" << select << endl;
        break;
    case 2:
        int select = 0;
        cout << "结果为：" << select << endl;
        break;
    case 3:
        int select = 0;
        cout << "结果为：" << select << endl;
        break;
    default:
        break;
    }


    // for break
    for (int i = 0; i < 10; i++) {

        if (i == 5) {
            break;
        }
        cout << i << endl;
    }

    // 嵌套循环
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 5)
            {
                break;
            }
            
            cout << "* ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}

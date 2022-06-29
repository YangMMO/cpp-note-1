#include <iostream>
using namespace std;

/* 一维数组 案例 */
int main() {

    system("chcp 65001");

    // 找最大值
    int arr[10] = {1, 2, 21, 4, 5, 8, 9, 10, 6, 7};
    int max = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        max = max < arr[i] ? arr[i] : max;
    }
    cout << max << endl;

    system("pause");
    return 0;
}

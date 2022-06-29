#include <iostream>
using namespace std;

/* 二维数组定义方式 */
int main() {

    system("chcp 65001");

    // 1.数据类型 数组名[ 行数 ][ 列数 ];
    int arr[2][3]; // 2行3列
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    // cout << "arr[0][0]：" << arr[0][0] << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << endl;
        }
        
    }

    // 2.数据类型 数组名[ 行数 ][ 列数 ] = { {数据1，数据2 } ，{数据3，数据4 } };
    int arr2[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << "  ";
        }
        cout << endl;
    }

    // 3.数据类型 数组名[ 行数 ][ 列数 ] = { 数据1，数据2，数据3，数据4};
    int arr3[3][2] = {1,2,3,4,5,6};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr3[i][j] << "  ";
        }
        cout << endl;
    }

    // 4.数据类型 数组名[ ][ 列数 ] = { 数据1，数据2，数据3，数据4};
    int arr4[][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr4[i][j] << "  ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}

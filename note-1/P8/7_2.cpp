#include <iostream>
using namespace std;
#include <string>

/* 结构体案例 案例2 */

// 1. 设计英雄结构体
struct Hero
{
    string name;
    int age;
    string gender;
};

// 创建冒泡排序 实现年龄升序排列
void bubbleSort (Hero heroArray[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (heroArray[j].age > heroArray[j + 1].age)
            {
                Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
        
    }
    
}

// 创建打印函数
void printInfo (Hero heroArray[], int len) {
    for (int i = 0; i < len; i++)
    {
            cout << "名字：" << heroArray[i].name << "  ";
            cout << "年龄：" << heroArray[i].age << "  ";
            cout << "年龄：" << heroArray[i].gender << endl;
    }
    
}

int main()
{
    system("chcp 65001");

    // 2. 创建数组存放5名英雄
    Hero heroArray[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
    };

    int len = sizeof(heroArray) / sizeof(heroArray[0]);

    cout << "原始数据：" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << "名字：" << heroArray[i].name << "  ";
        cout << "年龄：" << heroArray[i].age << "  ";
        cout << "年龄：" << heroArray[i].gender << endl;
    }

    // 3. 对数组进行排序，按照年龄进行升序排序
    bubbleSort(heroArray, len);

    // 4. 对排序后结果打印输出
    cout << "排序后：" << endl;
    printInfo(heroArray, len);

    system("pause");
    return 0;
}

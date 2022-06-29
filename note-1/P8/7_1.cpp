#include <iostream>
using namespace std;
#include <string>
#include <ctime>

/* 结构体案例 案例1 */

// 定义学生结构
struct Student
{
    string sName;
    float score;
};

// 定义老师结构体
struct Teacher {
    string tName;
    Student stuArray[5];    // 每个老师5个学生
};

// 给老师和学生赋值的函数
void allocateSpace(Teacher tArray[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].stuArray[j].sName = "Student_";
            tArray[i].stuArray[j].sName += nameSeed[j];

            int random = rand() % 61 + 40;
            tArray[i].stuArray[j].score = random;
        }
    }
    
}

// 打印所有信息
void  printInfo (Teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "老师姓名：" << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\t学生名：" << tArray[i].stuArray[j].sName << "  "
                 << "分数： " << tArray[i].stuArray[j].score << endl;
        }
        
    }
    
}

int main()
{
    system("chcp 65001");

    // 随机数种子
    srand((unsigned int)time(NULL));

    // 创建三明老师的数组
    Teacher tArray[3];

    // 通过函数给三名老师的信息复制，并给老师带的学生信息复制
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);

    // 打印所有老师以及所带的学生
    printInfo(tArray, len);

    system("pause");
    return 0;
}

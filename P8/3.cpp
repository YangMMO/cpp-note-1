#include <iostream>
using namespace std;
#include <string>

/* 结构体指针 */

// 定义结构体
struct Student {
    string name;
    int age;
    float score;
};

int main()
{
    system("chcp 65001");

    // 1. 创建学生结构体变量
    Student stu = { "张三", 18, 100 };

    // 2. 通过指针指向结构体变量（地址）
    Student *p = &stu;

    // 3. 通过指针访问结构体变量的数据，使用 (->) 符号访问数据
    cout << "学生姓名：" << p->name << "  " << "年龄：" << p->age << "  " << "分数：" << p->score << endl;

    system("pause");
    return 0;
}

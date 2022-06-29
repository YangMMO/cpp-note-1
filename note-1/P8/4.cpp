#include <iostream>
using namespace std;
#include <string>

/* 结构体嵌套结构体 */

// 定义学生结构体
struct Student
{
    string name;
    int age;
    float score;
};

// 定义老师结构体
struct Teacher {
    int id;
    string name;
    int age;
    Student stu;    // 辅导的学生
};

int main()
{
    system("chcp 65001");

    // 1. 创建老师
    Teacher t;
    t.id = 100;
    t.name = "张老师";
    t.age = 30;
    t.stu.name = "张三";
    t.stu.age = 18;
    t.stu.score = 70;

    cout << "老师id：" << t.id << "  " << "姓名：" << t.name << "  " << "年龄：" << t.age << endl;

    cout << "学生姓名：" << t.stu.name << "  " << "年龄：" << t.stu.age << "  " << "分数：" << t.stu.score << endl;


    system("pause");
    return 0;
}

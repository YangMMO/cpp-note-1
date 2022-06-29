#include <iostream>
using namespace std;
#include <string>

/* 结构体做函数参数 */

// 定义学生结构体
struct Student
{
    string name;
    int age;
    float score;
};

// 打印学生信息（值传递 .）
void printStudent1(Student stu)
{
    stu.age = 100;
    cout << "打印函数1 学生姓名：" << stu.name << "  " << "年龄：" << stu.age << "  " << "分数：" << stu.score << endl;
}

// 打印学生信息（地址传递 ->）
void printStudent2(Student *stu)
{
    stu->age = 100;
    cout << "打印函数2 学生姓名：" << stu->name << "  " << "年龄：" << stu->age << "  " << "分数：" << stu->score << endl;
}

int main()
{
    system("chcp 65001");

    // 1. 将学生传入到一个参数中，打印学生所有的信息
    Student stu;
    stu.name = "张三";
    stu.age = 18;
    stu.score = 70;

    // 值传递
    printStudent1(stu);

    // 地址传递
    printStudent2(&stu);

    cout << "学生姓名：" << stu.name << "  " << "年龄：" << stu.age << "  " << "分数：" << stu.score << endl;

    system("pause");
    return 0;
}

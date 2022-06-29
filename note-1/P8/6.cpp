#include <iostream>
using namespace std;
#include <string>

/* 结构体中 const使用场景 */

// 定义学生结构体
struct Student
{
    string name;
    int age;
    float score;
};

// 打印结构体信息 ，为什么使用指针，因为减少拷贝时所产生的内存消耗，而且不会复制新的副本
void printStudent(const Student *stu)
{
    // stu->age = 100; //为了防止误操作可以加const, 如果有修改则提示报错
    cout << "内部 学生姓名：" << stu->name << "  "
         << "年龄：" << stu->age << "  "
         << "分数：" << stu->score << endl;
}

int main()
{
    system("chcp 65001");

    // 创建结构体变量
    Student stu = {"张三", 18, 70};

    // 通过函数打印结构体变量的信息
    printStudent(&stu);

    cout << "外部 学生姓名：" << stu.name << "  "
         << "年龄：" << stu.age << "  "
         << "分数：" << stu.score << endl;
    
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;
#include <string>

/* 结构体定义和使用 */

// 1. 创建学生数据类型（类型集合组成的类型）
// 声明关键字 struct
struct Student {
    // 姓名
    string name;
    // 年龄
    int age;
    // 分数
    int score;
} stu3; // 尾部跟着变量名，则顺便创建变量名

// 2 . 通过学生类型创建具体学生
int main()
{
    system("chcp 65001");

    // 2.1 struct 结构体名 变量名
    struct Student stu1;
    stu1.name = "张三";
    stu1.age = 18;
    stu1.score = 100;
    cout << "学生1：" << stu1.name << " " << stu1.age << " " << stu1.score << endl;

    // 2.2 struct 结构体名 变量名 = {成员1值 ， 成员2值…}
    struct Student stu2 = { "李四", 19, 80 };
    cout << "学生2：" << stu2.name << " " << stu2.age << " " << stu2.score << endl;

    // 2.3 定义结构体时顺便创建变量
    stu3.name = "王五";
    stu3.age = 20;
    stu3.score = 90;
    cout << "学生3：" << stu3.name << " " << stu3.age << " " << stu3.score << endl;

    // 推荐1和2写法
    // 可省略struct关键字声明变量
    Student stu4 = { "赵六", 21, 70 };
    cout << "学生4：" << stu4.name << " " << stu4.age << " " << stu4.score << endl;

    system("pause");
    return 0;
}

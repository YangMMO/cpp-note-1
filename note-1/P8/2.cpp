#include <iostream>
using namespace std;
#include <string>

/* 结构体数组 */

// 1. 定义结构体
struct Student {
    string name;
    int age;
    float score;
};

int main()
{
    system("chcp 65001");

    // 2. 创建结构体数组
    Student stuArray[3] = {
        { "张三", 18, 100 },
        { "李四", 19, 80 },
        { "王五", 20, 90 }
    };

    // 3. 给结构体数组中的元素赋值
    stuArray[2].name = "赵六";
    stuArray[2].age = 21;
    stuArray[2].score = 60;

    // 4. 遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "学生" << i + 1 << "：" << stuArray[i].name << " " << stuArray[i].age << " " << stuArray[i].score << endl;
    }


    system("pause");
    return 0;
}

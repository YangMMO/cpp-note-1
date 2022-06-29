#include <iostream>
using namespace std;

/* 实型（浮点数） */
int main()
{

    // 单精度 float
    // 小数后面不加f, 默认会是(double)(3.140000000000000124)
    // 加f后，(float)(3.140000105F)
    float f1 = 3.1415926f;
    cout << "f1 = " << f1 << endl;
    cout << "f1 sizeof = " << sizeof(float) << endl;

    // 双精度 double
    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;
    cout << "d1 sizeof = " << sizeof(double) << endl;

    // 注意！ 默认输出 显示6位有效数字 ，需要输出全部需要配置


    // 科学技术法 
    // e后面是正数则代表 3 * 10 ^ x
    // e后面是负数则代表 3 * 0.1 ^ x
    float f2 = 3e2;
    cout << "f2 = " << f2 << endl;
    float f3 = 3e-2;
    cout << "f3 = " << f3 << endl;

    float f4 = 3e3;
    cout << "f2 = " << f4 << endl;
    float f5 = 3e-3;
    cout << "f3 = " << f5 << endl;

    system("pause");
    return 0;
}

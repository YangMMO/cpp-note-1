#include <iostream>
using namespace std;

/* 指针所占内存空间 */
int main() {
    system("chcp 65001");

    // 32位系统4字节，64位系统8字节
    int a = 10;
    int * p = &a;

    // 无论什么类型，32位系统4字节，64位系统8字节
    cout << "sizeof(int *)：" << sizeof(int *) << endl;
    cout << "sizeof(float *)：" << sizeof(float *) << endl;
    cout << "sizeof(double *)：" << sizeof(double *) << endl;
    cout << "sizeof(long *)：" << sizeof(long *) << endl;
    cout << "sizeof(long long *)：" << sizeof(long long *) << endl;
    cout << "sizeof(void *)：" << sizeof(void *) << endl;
    cout << "sizeof(char *)：" << sizeof(char *) << endl;

    system("pause");
    return 0;
}

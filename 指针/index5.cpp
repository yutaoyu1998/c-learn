#include <iostream>
using namespace std;

int main()
{
    int a[200], *p;
    p = a;
    *p = 10;       // a[0] = 10
    *(p + 1) = 20; // a[1] = 20
    p[2] = 100;    // 等同于*(p+2) = 100
    p[3] = 400;    // 等同于*(p+3) = 400

    cout << a[0] << "\n";
    cout << a[1] << "\n";
    cout << a[2] << "\n";
    cout << a[3] << "\n";

    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i; //对数组前10个元素赋值
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "item" << i << " = " << p[i] << endl;
    }

    ++p; // p 指向 a[1]

    cout << p[0] << endl; //输出1 p[0]等效于*p,p[0]即是a[1]

    p = a + 6;  // p指向a[6]
    cout << *p << endl;

    return 0;
}
/*
    指针作为函数的参数
*/

#include <iostream>
using namespace std;

void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int m = 3, n = 4;
    cout << "before swap, m:" << m << ", n:" << n << endl;
    Swap(&m, &n);
    cout << "after swap, m:" << m << ", n:" << n << endl;
    // char a = 'A', b = 'B';
    // cout << "before swap, a:" << a << ", b:" << b << endl;
    // Swap((int *)&a, (int *)&b);
    // cout << "after swap, a:" << a << ", b:" << b << endl;
    Swap(m, n);
    cout << "after swap2, m:" << m << ", n:" << n << endl;
    return 0;
}
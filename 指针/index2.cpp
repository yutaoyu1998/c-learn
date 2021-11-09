#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *p = &arr[0]; // p 执向了arr[0]的内存地址
    cout << "*p1:" << *p << "\n";
    cout << "p1:" << p << "\n";
    ++p; // p 指向了arr[1]的内存地址
    cout << "*p2:" << *p << "\n";
    cout << "p2:" << p << "\n";
    ++p; // p 指向了arr[2]的内存地址
    cout << "*p3:" << *p << "\n";
    cout << "p3:" << p << "\n";
    p += 8;
    cout << "*p4:" << *p << "\n";
    cout << "p4:" << p << "\n";
    return 0;
}
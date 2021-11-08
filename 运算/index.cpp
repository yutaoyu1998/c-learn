#include <iostream>
using namespace std;
int main()
{
    unsigned int n1 = 0xffffffff;
    cout << n1 << endl;
    unsigned int n2 = n1 + 3; // 溢出
    cout << n2 << endl; // 0x100000002;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char ch1 = 'A';
    char *pc = &ch1;
    // & 是取地址运算符
    // *pc = 'B';
    cout << "*pc:" << *pc << "\n";
    cout << "pc:" << pc;
    return 0;
}
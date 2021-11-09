#include <iostream>
using namespace std;

int main()
{
    int *p;
    int num = 123123;

    p = &num;

    cout << p << "\n";
    cout << *p << "\n";

    return 0;
}
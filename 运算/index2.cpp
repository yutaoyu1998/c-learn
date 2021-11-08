#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;
    double d = a / b;   // 3
    cout << d << endl;
    d = 5 / 2;  // 2
    cout << d << endl;
    d = 5 / 2.0;  // 2.5
    cout << d << endl;
    d = (double)a / b; // 3.33333
    cout << d << endl;
    return 0;
}
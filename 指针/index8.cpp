/* 指针和字符串 */

#include <iostream>
using namespace std;

int main()
{
    // char * p = "Please input your name: \n";
    // cout << p;

    char name[20];
    char *pName = name;
    cin >> pName;

    cout << "Your name is " << pName << endl;

    return 0;
}
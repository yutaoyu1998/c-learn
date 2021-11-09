#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100] = "hello world";
    str[7] = 0;
    cout << str << "\n";

    // 中间有空格会被截断
    // cin >> str;
    // cout << str << "\n";

    // 读取一行, 最多读取 （100 - 1） 个字符
    cin.getline(str, 100);
    cout << str << "\n";

    return 0;
}
/*
    判断一个数是不是素数，可以用2到根号n之间的所有整数去除n,
    看能否整除。如果都不能整除，那么n是素数
*/

#include <iostream>
using namespace std;
int main()
{
    bool res = true;
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            res = false;
            break;
        }
    }
    res ? cout << "true" : cout << "false";

    return 0;
}
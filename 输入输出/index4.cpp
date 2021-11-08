#include <iostream>
using namespace std;
/**
 * @brief 利用freopen重定向输入模拟测试数据
 * 
 * @return int 
 */
int main()
{
    freopen("./test.txt", "r", stdin);
    int n, max = 0;
    while (cin >> n)
    {
        if (n > max)
            max = n;
    }
    cout << max;
    return 0;
}
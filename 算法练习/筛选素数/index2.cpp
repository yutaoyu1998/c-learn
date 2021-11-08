/* 
    筛选法求素数
    把2到n中所有的数列都列出来，然后从2开始，先划掉n内所有2的倍数
    然后从每一次剩下的数（比是素数）开始，划掉其n内的所有倍数

    空间换时间
*/

#include <iostream>
using namespace std;
#define MAX_NUM 10000000
char isPrime[MAX_NUM + 10];
int main()
{
    for (int i = 2; i <= MAX_NUM; i++)
    {
        isPrime[i] = 1;
    }
    for (int i = 2; i <= MAX_NUM; i++)
    {
        if (isPrime[i])
        { // 素数
            for (int j = 2 * i; j <= MAX_NUM; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    for (int i = 2; i <= MAX_NUM; i++)
    {
        if (isPrime[i])
            cout << i << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;
#define NUM 10
int arr[NUM];   
/**
 * @brief 接受一组输入的数据并反转显示
 * 
 * @return int 
 */
int main()
{
    for (int i = 0; i < NUM; i++)
    {
        cin >> arr[i];
    }
    for (int i = NUM - 1; i >= 0; i--)
    {
        cout << i;
    }
    return 0;
}
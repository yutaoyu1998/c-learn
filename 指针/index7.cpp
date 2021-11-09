/*
    指针和二维数组
 */

#include <iostream>
using namespace std;

void Reverse(int *p, int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = p[i];
        p[i] = p[size - 1 - i];
        p[size - 1 - i] = temp;
    }
}

int main()
{
    int a[3][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12}};

    Reverse(a[0], 4);

    for (int i = 0; i < 4; i++)
    {
        cout << a[0][i] << endl;
    }

    return 0;
}
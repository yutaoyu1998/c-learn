/*
    指针： 数组反转
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
    int a[5] = {1, 2, 3, 4, 5};
    Reverse(a, sizeof(a) / sizeof(int));
    cout << "sizeof a " << sizeof(a) << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << *(a + i) << "," << endl;
    }
    return 0;
}
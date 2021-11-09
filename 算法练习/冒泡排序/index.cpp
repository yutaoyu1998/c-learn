/* 

    将数组分为有序和无序的两部分
    有序的在右边，无序在左边。

    依次比较相邻的两个元素
 */

#include <iostream>
using namespace std;

void BubbleSort(int a[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 22, 2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    BubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

/*
    从 n 个元素中找出最小的，放到第0个位子, 从 n-1个元素中找出最小的，放到1 ...
*/

#include <iostream>
using namespace std;

void SelectionSort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 22, 2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    SelectionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

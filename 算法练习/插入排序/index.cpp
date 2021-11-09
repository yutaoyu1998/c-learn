/*
    将数组分成有序和无序两个部分
    每次取出无序部分第一个元素，加入有序部分.
    假设插入到合适位置p,则p位置即后面的有序部分元素，右移一位，直到无序部分没有元素
*/

#include <iostream>
using namespace std;

void InsertSort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                int temp = a[i];
                for (int k = i; k > j; --k)
                {
                    a[k] = a[k - 1];
                }
                a[j] = temp;
                break;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 22, 2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(int);
    InsertSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

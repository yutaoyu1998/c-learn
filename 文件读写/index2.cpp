/*
    char * fgets (char * str, int num, FILE * fp)
    读取若干字符到str, 碰到一下三种情况会结束
    1、已经读入了num-1个字符
    2、碰到了换行符（换行符会被读入）
    3、文件读完
    读入成功返回str,失败返回NULL
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[1000];
    FILE *fp = fopen("./test.txt", "r");
    if (fp == NULL)
        return 0;

    while (fgets(str, 999, fp))
    {
        printf(str);
    }

    fclose(fp);
    return 0;
}
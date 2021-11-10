#include <iostream>
#include <cstdio>

/*
    在文件中写入和读取一个整数
*/

int main()
{
    FILE *fp = fopen("./test.dat", "wb");
    int x, y;
    scanf("%d", &x);
    fwrite(&x, sizeof(int), 1, fp);
    fclose(fp);
    fp = fopen("./test.dat", "rb");
    fread(&y, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d", y);
    return 0;
}
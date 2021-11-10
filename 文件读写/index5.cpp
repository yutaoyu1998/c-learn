/*
    修改二进制文件值
    用 r + b 既读又写时，如果做了读操作，做写操作用fseek重新定位文件指针。
*/

#include <iostream>
#include <cstdio>

struct Student
{
    char name[20];
    int score;
};

int main()
{
    Student s;
    FILE *fp = fopen("./student.dat", "r+b");
    if (!fp)
    {
        printf("error\n");
        return 0;
    }
    fseek(fp, 2 * sizeof(s), SEEK_SET); // 定位到第三个sudent
    fwrite("Mike", 1, 5, fp);
    fseek(fp, 0, SEEK_SET);
    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("%s %d\n", s.name, s.score);
    }
    fclose(fp);
    return 0;
}
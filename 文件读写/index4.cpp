/*
    从键盘输入几个学生的姓名成绩，并以二进制方形式保存

    二进制读写好处：
    节约空间
    便于快速读取，改写单个学生的信息
    便于排序、查找学生信息
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
    // 写入
    // FILE *fp = fopen("./student.dat", "wb");
    // while (scanf("%s%d", &s.name, &s.score) != EOF)
    // {
    //     fwrite(&s, sizeof(s), 1, fp);
    // }
    // fclose(fp);

    //读出
    FILE *fp2 = fopen("./student.dat", "rb");
    while (fread(&s, sizeof(s), 1, fp2) == 1)
    {
        printf("%s %d\n", s.name, s.score);
    }
    fclose(fp2);
    return 0;
}

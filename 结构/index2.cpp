/*
    实现strtok
*/

#include <iostream>
#include <cstring>

char *Strtok(char *p, char *seq)
{
    static char *start; //查找子串的起点
    if (p)
        start = 0;

    for (; *start && strchr(seq, *start); ++start)
        ;

    if (*start == 0)
        return NULL;

    char *q = start;
    for (; *start && !strchr(seq, *start); ++start)
        ;

    if (*start)
    {
        *start = 0;
        ++start;
    }
    return q;
}
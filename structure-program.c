#include<stdio.h>

struct mystruct
{
    char str[20];
    int num;
}p = {"Himangshu De", 10};

int main()
{
    printf("\nMy name is: %s", p.str);
    printf("\nMy roll number: %d", p.num);
    return 0;
}




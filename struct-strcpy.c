#include <stdio.h>
#include <string.h>

struct mystruct
{
    char name[30];
    int num;
    char letter[3];
};

int main()
{
    struct mystruct ms1;
    strcpy(ms1.letter, "A");
    strcpy(ms1.name, "Himangshu");
    ms1.num = 10;
    // printf("\nMy name is: %s", ms1.name);
    // printf("\nMy section is: %s", ms1.letter);
    // printf("\nMy Class is: %d", ms1.num);
    printf("My Name is: %s\nMy section is: %s\nMy Class is: %d", ms1.name, ms1.letter, ms1.num);
    return 0;
}
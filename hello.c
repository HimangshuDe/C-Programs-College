#include <stdio.h>

int main(){
    char d[20];
    printf("Hello World");
    printf("\n");
    printf("Enter your name: ");
    scanf("%s", &d);
    printf("Hello! %s", &d);
    return 0;
}
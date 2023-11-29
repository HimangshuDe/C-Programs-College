// Find the factorial of a number in C using function recursion.

#include <stdio.h>

int fact(int);

int main(){
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    printf("%d", fact(user_input));
    return 0;
}

int fact(int a){
    if (a>=1)
        return a * fact(a-1);
    return 1;
}
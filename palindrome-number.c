// Find the whether a user given number is a palindrome or not.

#include<stdio.h>

int main(){
    int a, b=0, rem;
    printf("Enter a number: ");
    scanf("%d", &a);
    rem = a;
    while(a>0){
        b+=(a%10);
        b*=10;
        a/=10;
    }
    b/=10;
    if (rem==b){
        printf("The given number is a palindrome!");
    }
    else{
        printf("The given number is not a palindrome!");
    }
    return 0;
}
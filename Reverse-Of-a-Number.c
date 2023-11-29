// Find the reverse of a user given number.

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
    printf("The reverse of %d is: %d", rem, b);
    return 0;
}

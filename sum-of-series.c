// Add up the sum of series(1,1/2,1/3...n) upto n terms, where n is user-input.

#include <stdio.h>

int main(){
    int n;
    float sum=0, i;
    printf("Sum of series...\n");
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i<=n;i++){
        sum = sum + (1/i);
    }

    printf("%f", sum);
    return 0;

}

// NOTE: Execute this program using functions (Pending)
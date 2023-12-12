// Add up the series(1/1^1, 1/2^2, 1/3^3,...n) where n is user input.

#include<stdio.h>
#include<math.h>


int main(){
    int user_input; // "N" terms
    float i, sum = 0;
    
    printf("Enter a number: ");
    scanf("%i", &user_input);

    for (i=0;i<user_input;i++){
        sum = sum + (1/pow(i, i));
    }

    printf("%f", sum);
    return 0;
}

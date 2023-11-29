// Add up the series(1/1!, 1/2!,1/3!,...n) upto n where n is user input.

#include<stdio.h>

float fact(float);
int main(){
    int user_input=5;
    float i, sum=0;

    printf("Enter a number: ");
    scanf("%d", &user_input);

    for (i=1; i<=user_input;i++){
        sum = sum + (1/fact(i));
    }

    printf("%f", sum);
    return 0;
}

float fact(float a){
    if (a == 0)
        return 1;
    else
        return a*fact(a-1);
}
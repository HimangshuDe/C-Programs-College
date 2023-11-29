// Add up the sum of series(1,1/2,1/3...n) upto n terms, where n is user-input.

#include<stdio.h>

float sum_recur(float, float);

int main(){
    float sum=0, i, store_variable, user_input;
    printf("Sum of series using function recursion...\n");
    printf("Enter number: ");
    scanf("%f", &user_input);
    store_variable = sum_recur(sum, user_input);
    printf("%f", store_variable);

    return 0;

}

float sum_recur(float sum_value, float user_input_range){
    float sum_local = sum_value;
    if (user_input_range == 0){
        return sum_local;
    }
    sum_local = sum_local + (1/(user_input_range));
    sum_recur(sum_local, (user_input_range -1));
}
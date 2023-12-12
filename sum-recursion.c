// Write a recursion function that takes user input and returns sum upto it.

#include <stdio.h>

int sum_recur(int);

int main(){
    int end_num;
    printf("Enter number: ");
    scanf("%d", &end_num);
    printf("%d", sum_recur(end_num));
    return 0;
}

int sum_recur(int a){
    if (a>=1)
        return a + sum_recur(a-1);
}
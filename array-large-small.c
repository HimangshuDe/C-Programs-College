// Find the largest and smallest item in the array where items are user given.

#include<stdio.h>

void main(){
    //variable large
    int small, large, arr[4], loop_var;

    printf("Enter 4 numbers you wish to add in the array:\n");
    for (loop_var=0;loop_var<4;loop_var++){
        printf("Item %d: ", (loop_var+1));
        scanf("%d", &arr[loop_var]);
    }

    // setting initial value for the small and large.
    small = arr[0];
    large = arr[0];

    // traversing array
    for (loop_var=0;loop_var<4;loop_var++){
        if(arr[loop_var]>large){
            large = arr[loop_var];
        }
        if (arr[loop_var]<small){
            small = arr[loop_var];
        }
    }

    printf("The largest item in the array: %d\n", large);
    printf("The smallest item in the array: %d\n", small);

}
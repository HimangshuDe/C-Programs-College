// Find the number of positive, negative and zero value items from 
// the array, where arrays items are user given.

#include<stdio.h>

void main(){
    // Variable declaration
    int loop_var, arr[8], positive_count=0, negative_count=0, zero_count=0;

    // insertion of items using for loop.
    printf("Enter the numbers you wish to add into array: \n");
    for (loop_var=0;loop_var<8;loop_var++){
        printf("Item %d: ", (loop_var+1));
        scanf("%d", &arr[loop_var]);
        // printf("\n");
    }

    // traversing loop for finding +ve, -ve and 0 value item in array
    for (loop_var=0;loop_var<8;loop_var++){
        if (arr[loop_var]>0){
            positive_count++;
            continue;
        }
        else if (arr[loop_var]<0){
            negative_count++;
            continue;
        }
        else
            zero_count++;
    }

    printf("No. of positive items: %d\n", positive_count);
    printf("No. of negative items: %d\n", negative_count);
    printf("No. of zero-value items: %d\n", zero_count);
}
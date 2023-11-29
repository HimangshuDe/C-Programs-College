// Find an item in an array using linear search algorithm, where the search item is user defined.

#include<stdio.h>

int main(){
    int my_array[5], user_input, flag=1,i;
    for (i=0; i<5; i++){
        printf("Enter number to add in array: ");
        scanf("%d", &my_array[i]);
        printf("\nAdded into array!\n");
    }

    printf("Items in the array: ");
    for (i = 0; i<5;i++){
        printf("%d  ", my_array[i]);
    }

    printf("\n");
    printf("Enter the item to be searched: ");
    scanf("%d", &user_input);

    for(i=0; i<5;i++){
        if (my_array[i] == user_input){
            flag = 0;
            break;
        }
    }

    if (flag == 0){
        printf("Your item is in the array!");
    }
    else
        printf("Your item is not in the array!");
}
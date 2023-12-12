// A Simple Array program.

# include <stdio.h>

int main(){
    int my_array[5];
    int sum = 0;
    int i;
    // Storing data in an array
    for (i = 0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d", &my_array[i]); // Storing user-data in the array!
    }

    for (i=0; i<5;i++){
        sum +=my_array[i]; // Accessing elements from the array!
    }

    printf("Sum is: %d", sum);
    return 0;
}
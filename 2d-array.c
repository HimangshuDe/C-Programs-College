// Create a 2d array.

#include <stdio.h>

int main(){
    int arr1[2][2], arr2[2][2], arr3[2][2], i, j;

    // 2d Array input for arr1
    printf("Input for first matrix...\n");
    for (i=0; i<2;i++)
        for (j=0; j<2;j++){
            printf("Enter the number for matrix @ [%d][%d]: ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    
    // 2d Array input for arr2
    printf("\n");
    printf("Input for second matrix...\n");

    for (i=0; i<2;i++)
        for (j=0; j<2;j++){
            printf("Enter the number for matrix @ [%d][%d]: ", i,j);
            scanf("%d", &arr2[i][j]);
        }

    
    //output of the array arr1!
    printf("Matrix 1\n");
    for (i=0;i<2;i++)
    {
        printf("[ ");
        for (j=0;j<2;j++)
            printf("%d ", arr1[i][j]);
        
        printf("]");
        printf("\n");
    }
    
    //output of the array arr2!
    printf("\n");
    printf("Matrix 2\n");
    for (i=0;i<2;i++)
    {
        printf("[ ");
        for (j=0;j<2;j++)
            printf("%d ", arr2[i][j]);
        
        printf("]");
        printf("\n");
    }

    int user_choice;
    printf("What operation you'd like to perform?\n1. Addition\n2. Subtraction\n3.Multiplication\n4. Exit\nEnter your choice: ");
    scanf("%d",&user_choice);

    switch (user_choice)
    {
    case 1:
        // addition of two matrices
        for (i=0; i<2;i++)
            for (j=0; j<2;j++){
                arr3[i][j] = arr1[i][j] + arr2[i][j]; // addition and insertion of individual array elements.
            }
        
        //output of final array array3
        printf("\n");
        printf("Final Matrix after addition...\n");
        for (i=0;i<2;i++)
        {
            printf("[ ");
            for (j=0;j<2;j++)
                printf("%d ", arr3[i][j]);
            
            printf("]");
            printf("\n");
        }
        break;
    
    case 2:
        // subtraction of two matrices
        for (i=0; i<2;i++)
            for (j=0; j<2;j++){
                arr3[i][j] = arr1[i][j] - arr2[i][j]; // subtraction and insertion of individual array elements.
            }
        printf("\n");
        printf("Final Matrix after subtraction...\n");
        for (i=0;i<2;i++)
        {
            printf("[ ");
            for (j=0;j<2;j++)
                printf("%d ", arr3[i][j]);
            
            printf("]");
            printf("\n");
        }
        break;
    
    case 3:
        // Multiplication of two matrices
        for (i=0; i<2;i++)
            for (j=0; j<2;j++){
                arr3[i][j] = arr1[i][j] * arr2[i][j]; // multiplication and insertion of individual array elements.
            }
        
        printf("\n");
        printf("Final Matrix after multiplication...\n");
        for (i=0;i<2;i++)
        {
            printf("[ ");
            for (j=0;j<2;j++)
                printf("%d ", arr3[i][j]);
            
            printf("]");
            printf("\n");
        }
        break;
    
    default:
        printf("Bye!");
        break;
    }
}
// Find the greatest number in a multidimensional array.

#include <stdio.h>

int main(){
    int arr1[2][2], j, i, largest_num;
    
    for (i=0; i<2;i++){
        for(j=0; j<2; j++){
            printf("Enter the number for matrix @ [%d][%d]: ", i,j);
            scanf("%d", &arr1[i][j]);
        }
    }

    largest_num = arr1[0][0];

    for(i=0;i<2;i++)
        for(j=0;j<2;j++){
            if (arr1[i][j]>largest_num){
                largest_num = arr1[i][j];
            }
        }
    

    printf("The largest number in the array is: %d", largest_num);
    return 0;
}
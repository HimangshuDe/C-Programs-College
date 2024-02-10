#include <stdio.h>

int main()
{
    int user_num, sum = 0, reverse = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &user_num);

    temp = user_num;

    // Sum of each digit in the specified number.
    while(user_num > 0){
        sum = sum + (user_num % 10);
        user_num /= 10;
    }

    printf("The sum of each digit in the number is: %d... and\n", sum);

    // Restoring the original value.
    user_num = temp;

    // Reverse of the number.
    while(user_num > 0){
        reverse = (reverse * 10) + (user_num % 10);
        user_num /= 10;
    }
    printf("The reverse is %d..., also ", reverse);

    if (reverse == temp)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
    
}


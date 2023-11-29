#include<stdio.h>

void main(){
    /*
    Declaring a variable(syntax):

    type variableName = value;
    */

   int num1 = 7;

   // Other way of declaring a variable...
   int num2; // Declaring a variable first...

   // Assigning a variable, later...
   num2 = 5;

   printf(num1);
   printf("%d\n%d",num1, num2);
}



// Format Specifiers
/*

Format specifiers are used together with the printf() function to tell the
compiler what type of data the variable is storing.
It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign %, followed by a character.

We cannot print the variable directly in a C program alike 
other languages(Python, Java, C++)

i. To output value of an int variable, we use either %d or %i surrounded by double quotes.
ii. To output value of a float variable, we use %f surrounded by double quotes.
iii. To output value of a char variable, we use %c surrounded by double quotes. 
*/
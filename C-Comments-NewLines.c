// Below code is the syntax of C

#include<stdio.h>

int main(){
    // This is a single line comment.

    /* This is 
    a multi-line
    comment in C*/

    printf("Hello World");
    printf("I am learning C!");

    /*
    printf()
    
    output will be in 1 line, because by default printf don't insert a new line
    at the end.
    
    */

   /*
   New Line Character:
   '\n' is the new line escape sequence that forces the cursor the go to the new
   line in the output screen.


   Horizontal Tab:
   '\t' is the horizontal tab escape sequence that creates a horizontal tab.


   Backslash Character:
   '\\' is the backslash escape sequence thats inserts a backslash character.

   Double Quote Character:
   '\"' inserts a double quotation character in the output screen.
   */

    printf("\nThe next line will be printed below due to new line(\\n) character");
    printf("\nThis is the next line\t");
    printf("This is the line after horizontal tab(\\t)\n");
    printf("\"This\" is enclosed in double quotes(\")\n");

    return 0;
}
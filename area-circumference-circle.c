#include<stdio.h>

int main(){
    int radius, area, circumference;
    printf("Enter the radius value: ");
    scanf("%d", &radius);
    
    printf("The area of the circle is: %.2f sq. units\n",(3.14*radius*radius));
    printf("The circumference of the circle is: %.2f units\n",(2*3.14*radius));
    return 0;
}
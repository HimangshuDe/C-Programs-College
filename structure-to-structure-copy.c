#include<stdio.h>

struct strct1{
    int street_num;
    char place[100];
    int pin;
};

struct strct2{
    int street_num;
    char addr_line[100];
    int post_pin;
};


int main()
{
    struct strct1 s1;
    struct strct2 s2;

    char addr[100] = "Chakdaha";

    // Copying data across structures.
    s1.street_num = 346;
    s1.place = addr;
    s1.pin = 741222;

    s2 = s1;
    // s2.addr_line = s1.place;
    // s2.post_pin = s1.pin;
    // s2.street_num = s1.street_num;

    printf("The address is: %d, %s, %d", s2.street_num, s2.addr_line, s2.post_pin);
    return 0;
   
}
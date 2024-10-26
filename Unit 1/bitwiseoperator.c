//Write a program for Bitwise operator


#include <stdio.h>

int main()   {

    int a,b;
    a=20;
    b=50;

        printf("%d\n", (a &  b));           //Bitwise AND operator
        printf("%d\n", (a | b));            //Bitwise OR operator
        printf("%d\n", (a << b));           //Bitwise RIGHT SHIFT operator
        printf("%d\n", (a >> b));           //Bitwise LEFT SHIFT operator
        printf("%d\n", (a  = ~b));          //Bitwise NOR operator        
        printf("%d\n", (a ^ b));            //Bitwise XOR operator
   
   return 0;
}
//Write a program for Logical operator


#include <stdio.h>

int main()   {

    int a,b,c;
    a=20;
    b=30;
    c=10;

            printf("%d\n", (a > b) && (b > c) );  // AND operator
            printf("%d\n", (a > b) || (b > c) );  // OR operator
            printf("%d\n", !(a > b) );            // NOT operator    
    
    return 0;
}
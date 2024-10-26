//Write a program for assingment operator


#include <stdio.h>

int main()   {

    int a=50;

            printf("%d\n",a);       //print value of a

        a=50;
            a+=10;
            printf("%d\n",a);       //print value of a after addding by 10
        
        a=50;
            a-=10;
            printf("%d\n",a);       //print value of a after substracting by 10
        
        a=50;
            a*=10;
            printf("%d\n",a);       //print value of a after multiplying by 10

        a=50;
            a/=10;
            printf("%d\n",a);       //print value of a after dividing by 10

        a=50;
            a%=10;
            printf("%d\n",a);       //print value of a after putting mod of 10

/*declaring a=50 every time coz when first operation was done on variable a then in second opertion
  compiler was taking value of a which he get after first operation not as i declare a=50 soo declaring
  a=50 every time before any new operation*/


    return 0;   
}
#include <stdio.h>


int main ()
{

    int binaryValue = 0 , decimalValue= 0 , remider = 0 , x=0 , y = 0 ;
    int octal[100] ;
    int i = 1 ;

    printf("Please enter your binary number (1- 0 ) :");
    scanf("%d",&binaryValue) ;

    while (binaryValue != 0 )
    {

        remider = binaryValue%10 ;
        decimalValue = decimalValue + remider * i ;
        i = i * 2 ;
        binaryValue = binaryValue/10 ;

    }

    printf("The decimal value is %d \n ",decimalValue);

    while (decimalValue != 0 )
    {
        octal [x] = decimalValue%8 ;
        decimalValue = decimalValue/8 ;
        x ++ ;
    }

    printf("The octal  value is : ") ;

    for (y = x -1 ; y>= 0 ; y--)
    {
        printf("%d",octal[y]);
    }


    return 0 ;
}

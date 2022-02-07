#include <stdio.h>


int main ()
{

    int binaryValue = 0 , decimalValue= 0 , remider = 0 , x=0 , y = 0 ;
    int hexa[100] ;
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
        hexa [x] = decimalValue%16 ;
        decimalValue = decimalValue/16 ;
        x ++ ;
    }

    printf("The hexa value is : ") ;

    for (y = x -1 ; y >= 0 ; y--)
    {
        if (hexa[y] > 9 )
        {
            printf("%c",hexa[y] + 55);
        }
        else {

            printf("%d",hexa[y]);
        }
    }


    return 0 ;
}



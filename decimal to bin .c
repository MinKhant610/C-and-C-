#include <stdio.h>

int main ()
{

    int decimal_value = 0 , x = 0 , y = 0 , binary = 0 ;
    int bin[100];

    printf("Enter the decimal number :");
    scanf("%d",&decimal_value);

    while (decimal_value != 0)
    {
        bin[x] = decimal_value%2 ;
        decimal_value = decimal_value/2 ;
        x++ ;

    }


    printf("The binary value is : ");


    for (y = x -1 ; y >= 0 ; y --)
    {
        printf("%d",bin[y]);
    }



return 0 ;
}

#include <stdio.h>
int binTodec(char arr[]) ;

int main ()
{
    char ch_bin [20];
    int final_decimal ;

    printf("Enter the binary number : ");
    gets(ch_bin);

    final_decimal = binTodec(ch_bin);
    printf("The decimal vale is : %d",final_decimal);

    return 0 ;
}

int binTodec(char arr[])
{
    int i = 0 ;
    int number=0 ;
    int decimal=0 ;

    while (arr[i] != '\0')
    {

        number = arr [i] - 48 ;
        decimal = (decimal * 2 ) + number ;

        i++ ;

    }


    return decimal  ;
}

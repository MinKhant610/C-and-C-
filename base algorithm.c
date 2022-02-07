#include <stdio.h>

int bintodec();
int bintooctal();
int bintohexa();
int bintodec();

int main ()
{
    int input ;


    while (input != 5) {
    printf("\n");
    printf("_____________________\n");
    printf("| Enter the options | \n");
    printf("---------------------\n");

    printf("1 : Binary to Decimal \n");
    printf("2 : Binary to Octal \n");
    printf("3 : Binary to Hexa \n");
    printf("4 : Decimal to Binary \n");
    printf("5 : Exit \n");
    printf("\n");

    printf("===> ");
    scanf("%d",&input);


    if (input == 1)
    {
        bintodec();
    }
    else if (input == 2 )
    {
        bintooctal();
    }
    else if (input == 3)
    {
        bintohexa();
    }
    else if (input == 4)
    {
        dectobin();
    }
    else if (input == 5 )
    {
        printf("\t Bye Have A Grate Time :3");
    }
    else if (input == NULL)
    {
        printf("No Space Allow \n");
    }
    else
    {
            printf("Enter correctly \n");
    }

    }


    return 0 ;
}

int bintodec()
{
    int binaryValue = 0 , decimalValue= 0 , remider = 0 ;
    int i = 1;

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

}

int bintooctal()
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
}

int bintohexa()
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
}

int dectobin()
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

}

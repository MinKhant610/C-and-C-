#include<stdio.h>
#include<math.h>
#define ARR 20
int main()
 {

char hexa[ARR];
int remainder [ARR];
int x = 0 , y = 0 , i = 0 ;
int length = 0 ;
int decimal = 0 ;

printf("Enter the hexa value :");
gets(hexa);

for (length = 0 ; hexa[length] != '\0'; ++length);

for (i=0 ; hexa[i] != '\0' ; ++i , --length)
{

    if (hexa[i] >= '0' && hexa[i] <= '9'){
        decimal += (hexa[i] - '0') * pow(16.0,length-1) ;
    }

    if (hexa[i] >= 'A' && hexa [i] <'F'){
        decimal +=(hexa[i] -55) * pow(16.0,length-1);
    }

    if (hexa[i] >= 'a' && hexa [i] <= 'f'){
        decimal += (hexa[i] - 87) * pow(16.0, length - 1);
    }



}

printf("The decimal value is : %d",decimal);


return 0 ;
}

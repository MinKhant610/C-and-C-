#include <stdio.h>
//little endian and big endian ;

int main ()
{
    int a = 0 ;
    char *x ;
    char *z ;
    x = (char *) &a ;

    x[0] = 1 ;
    x[1] = 2 ;
    x[2] = 1 ;
    x[3] = 1 ;

    // our computer are little endian ;

    printf("The value is : %d \n",a);

    return 0 ;
}

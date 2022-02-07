#include <stdio.h>
int main ()
{
    test () ;
    return 0 ;
}

test ()
{
    int a = 10 ;
    int b = 5 ;
    int c = a + b ;

    printf ("The result is : %d",c);
    return 0 ;
}
//test is global

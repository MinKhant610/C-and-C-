#include <stdio.h>

int main ()
{

    int y = 30 ;
    int *p ;
    p = &y;
    fun (p);
    printf("%d",y);

    /*

    int y = 30 ;
    fun (&y);
    printf(%d",y);

    */

    return 0 ;
}

void fun(int *x)
{
     *x = 20 ;
}

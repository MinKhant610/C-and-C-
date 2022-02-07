#include <stdio.h>
int* check (int *x , int *y);
int main ()
{
    int a = 10 ;
    int b = 20 ;

    int *p ;

    p = check (&a,&b);
    printf("%d is larger ",*p);

    return 0 ;
}

int* check (int *x , int *y)
{
    if (*x > *y)
    {
        return x ;
    }
    else
    {
        return y ;
    }

    return 0 ;
}

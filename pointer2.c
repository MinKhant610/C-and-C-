#include <stdio.h>

int main ()
{
    int *p1,*p2,*p3 ;
    int a = 10 , b = 30 , c = 0 ;

    p1 = &a , p2 = &b ;

    printf("The address of p1 %d \n",p1);
    printf("The address of p2 %d \n",p2);

    c = a + b ;
    printf("a + b %d \n",c);

    p3 = *p1 + *p2 ;
    printf("p1 + p2 %d \n",p3);

    p1++ ;
    printf("p1 ++ %d \n",p1);

    p1 = p1+2 ;
    printf("p1 +2 %d \n",p1);

    p3 = p1 - p2 ;
    printf("p1 - p2 %d \n",p3);

    // not work => p3 = p1 + p2 ; (error ) because you cannot add memory address
    // but you can subtract

    return 0 ;
}

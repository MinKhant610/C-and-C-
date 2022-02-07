#include <stdio.h>
void swap (int *a , int *b );

int main ()
{
    int a = 10 ;
    int b = 20 ;

    printf("Before swap a : %d\n",a);
    printf("Before swap b : %d\n",b);

    swap (&a,&b);

    printf("After swap a : %d\n",a);
    printf("After swap b : %d\n",b);


    return 0 ;
}

void swap (int *a , int *b )
{

int temp = *a ;
*a = *b ;
*b = temp ;

}

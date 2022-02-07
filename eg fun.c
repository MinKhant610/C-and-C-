#include <stdio.h>
int multi(int a , int b );

int main ()
{
    int first = 0 ;
    int second = 0 ;

    printf("Please Enter the first number : ");
    scanf("%d",&first);
    printf("Please Enter the second number : ");
    scanf("%d",&second);

    int a = multi(first , second);
    printf("The result is   %d",a);

    return 0 ;

}

int multi (int a , int b )
{
    return a * b ;
}

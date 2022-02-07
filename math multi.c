#include <stdio.h>

int main ()
{
    int multi = 0 ;
    int i =1;
    int result = 0 ;

    printf("Enter the number : ");
    scanf ("%d",&multi);

    while ( i <= 12)
    {
        result = i * multi ;
        printf("%d * %d = %d \n",multi , i , result);
        i ++;
    }

    return 0 ;
}

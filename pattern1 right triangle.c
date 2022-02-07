#include <stdio.h>

int main ()
{
    int row = 0 ;

    printf("Enter the size of pattern : ");
    scanf("%d",&row);

    for (int i = 0 ; i < row ; i++ )
    {
        printf ("%d",i);
        for (int z = 0 ; z < i ; z ++)
        {
            printf("*");

        }

        printf("\n");
    }



    return 0 ;
}

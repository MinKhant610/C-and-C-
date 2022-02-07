#include <stdio.h>

int main ()
{
    int row =0 ;

    printf("Enter the size of pattern : ");
    scanf("%d",&row);
    int forspace = row  ;


    for (int i = 0 ; i < row ; i ++ )
    {

        for (int space = 0 ; space < forspace ; space ++ )
        {

            printf (" ");
        }


    for (int star = 0 ; star <= (i*2) ; star ++ )
    {
        printf("*");
    }

    printf("\n");

    forspace -- ;

    }


    return 0 ;
}

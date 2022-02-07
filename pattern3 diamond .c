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

    int x,y,z ;
    int uspace = 1 ;
    int rrow = row *2 -1 ;

    for (x = 0 ; x < row ; x ++)
    {

        for (y = 0 ; y < uspace ; y ++ )
        {

            printf(" ");
        }

        for (z = 0 ; z < rrow ; z ++ )
        {

            printf("*");
        }
        uspace ++ ;
        rrow = rrow - 2 ;
        printf("\n");



    }



    return 0 ;
}

#include <stdio.h>

int main ()
{

    int a,b,c,d ;
    int ascii = 65 ;

    for (a = 26 ; a  >= 1 ; a -- )
    {
        for (b = 26 ; b >= a ; b -- )
        {
            printf(" ");

        }

        for (int c = 1 ; c < a ; c ++)
        {
            printf("%c", ascii++);

        }

        for (c = a-1; c > 0 ; c --)
        {
            printf("%c",ascii--);

        }

        printf("\n");

    }




    return 0;
}

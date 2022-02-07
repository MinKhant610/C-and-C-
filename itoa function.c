#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i = 4 ;
    int a = 314 ;
    int b = 22 , c = 3 ;

    char ch = 'A';
    char bh = 'O' ;
    char buffer [33];

    printf("%c = %d = 0x%x \n",ch,ch,ch);
    printf("%c = %d = 0x%x \n",bh,bh,bh);

    if (a == b )
        {
        printf("A is equal to B ");
    }
    else {
        printf("A is not equal to B");
    }



    return 0 ;
}
// %c for charator %d for integer and x for hexa

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int user = 0 ;
    int sys ;
    int newpoint = 0 ;
    int dice ;
    int name = 0 ;
    int input = 0 ;


    while (newpoint < 30)
    {

    printf(" \n Press 1 to roll dice ") ;
    scanf ("%d",&dice) ;

    srand (time(NULL));
    sys = (1+rand()%6);
    dice = sys ;


    printf("\n");
    printf("Now your point increase  %d \n",dice);
    user = user  + dice ;
    newpoint = user ;

    if (newpoint == 3)
    {
        newpoint = newpoint + 18 ;
        printf ("!!! You get ladder and increse 18 points ! \n ") ;
    }
    else if (newpoint == 6 )
    {
        newpoint = newpoint + 12 ;
        printf ("!!! You get ladder and increase 12 points  ! \n ") ;
    }
    else if (newpoint == 17)
    {
        newpoint = newpoint + 2 ;
        printf ("!!! You get ladder and increse 2 points ! \n") ;
    }
    else if (newpoint == 23)
    {
        newpoint = newpoint + 3 ;
        printf ("!!! You get ladder and increse 3 points! \n") ;
    }
    else if (newpoint == 29)
    {
        newpoint = newpoint - 27 ;
        printf("Oh! You are eaten by snake and decrese 27 points !!! \n");
    }
    else if (newpoint == 20)
    {
        newpoint = newpoint - 12 ;
        printf("Oh! You are eaten by snake and decrease 12 !!! \n");
    }
    else if (newpoint == 24)
    {
        newpoint = newpoint - 10 ;
        printf("Oh! You are eaten by snake and decrease 10 points !!! \n");
    }
    else if (newpoint == 9)
    {
        newpoint = newpoint - 4 ;
        printf("Oh! You are eaten by snake and decrease 4 points !!! \n");
    }

    printf("+++ Now You are in %d \n",newpoint);

    }


}

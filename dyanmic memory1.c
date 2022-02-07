#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ptr = malloc (5 * sizeof (*ptr));

    if (ptr != NULL)
    {
        printf("Memory Block Created at %d \n",ptr);

         ptr [0] = 10 ;
         ptr [4] = 20 ;
         ptr [2] = 30 ;
         ptr [3] = 40 ;
         ptr [1] = 50 ; //desending

    }
    else {

        printf("Cannot Create !!! \n");
    }


    int i = 0 ;

    for (i = 0 ; i < 5 ; i ++)
    {
        printf("\n %d value is %d \n ",i, *(ptr+i)); //show assending

    }

    free (ptr);
    printf("\n Memory was DE-Allocated \n");

    return 0 ;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int *dyn_arr = NULL ;
    int element = 2 ;
    int i = 0 ;

    dyn_arr = calloc (element , sizeof (int));

    for (i = 0 ; i < element ; i++)
    {
        dyn_arr [i] = i ;
        printf("dynamic array [%d] = %d \n",i , dyn_arr [i]);

    }

    printf("__________ Dynamic Array ________ \n");
    element = 6 ;

    dyn_arr = realloc (dyn_arr , element * sizeof (int));

    for (i = 0 ; i < element ; i++)
    {
        dyn_arr [i] = i ;
        printf("Dynamic Array [%d] = %d \n",i , dyn_arr[i]);

    }

    free(dyn_arr);
    printf("\n Memory was de-allocated !!! ");

    return 0 ;

}

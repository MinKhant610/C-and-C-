#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i = 0 ;
    int *ptr ;
    int sum = 0 ;

    ptr = calloc (5,sizeof(int));


    printf("Create memory of each block size %d \n",sizeof(ptr));

    if (ptr == NULL)
    {
        printf("Memory Error !!!");
    }
    else
    {
        for (int i = 0 ; i < 5 ; i++)
        {
            ptr [i]  = i ;
            sum += ptr [i] ;
        }
    }

    printf("\n Sum of all values in each block %d \n",sum);


    free(ptr);
    printf("\n Memory was DE-Allocated ! \n");

    return 0 ;
}

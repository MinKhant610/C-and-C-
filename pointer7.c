#include <stdio.h>

int main ()
{

    int inArr[5] = {1,3,4,5,9};
    int *p ;
    p = &inArr[0];

    int *p2 ;
    p2 = p+3 ;

    printf("The address of inArr or index 0 : %d\n",p);

    printf("The address of index 1 : %d\n",&inArr[1]);
    printf("The address of index 2 : %d\n",&inArr[2]);
    printf("The address of index 3 : %d\n",&inArr[3]);
    printf("The address of index 4 : %d\n",&inArr[4]);

    /*

    pointer address = p + x * sizeof (one element of the array  ) ;
                    if integer arry the value must be 4 and if character array the value must be 1 ;
                    = 1610310016  + 12
                    = 1610310028

    So 1610310028 (memory address ) is equal to index 3 (5)


    */

    printf("The value of p2 : %d \n",*p2);

    int *p3 ;
    p3 = p2 - p ; //memory address - memory address = memory address / 4 (pointer value ) ;
    printf("p2 - p1 = %d \n",p3);


    return 0 ;
}

#include <stdio.h>
#define ARR 5

int main ()
{
    int i = 0;
    int arr[ARR];

    for ( i = 0 ; i < ARR ; i ++){

        arr[i] = 2 * i ;

    }

    printf("%s %9s \n","Index","Value");

    for (int j = 0 ; j < ARR ; j++){

        printf("%3d %9d \n",j ,arr[j]);
    }

    return 0 ;
}

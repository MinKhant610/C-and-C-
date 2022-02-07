#include <stdio.h>
#define ARR 5
int main ()
{
    int arr[ARR] ;
    for (int i = 0 ; i < ARR ; i ++){

        printf("Enter the data :");
        scanf("%d",&arr[i]);
    }

    for (int j = 0 ; j < ARR ; j++){

        printf("Showing the data : %d\n",arr[j]);
    }




    return 0 ;
}

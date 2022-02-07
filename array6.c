#include <stdio.h>
#define ARR 100
int average (int ave[]) ;

int main ()
{
    int arr[ARR] ;
    int n = 0 ;

    printf("Please Enter the size of array (1 - 100 ) : ");
    scanf("%d",&n);

    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter the data : ");
        scanf("%d",&arr[i]);


    }

    average(arr);


    return 0 ;
}

int average (int ave[])
{

    for (int x = 0 ; x < n ; x++)
    {
        printf("Showing the data : %d",ave[x]);
    }

}

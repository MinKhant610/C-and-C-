#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DATA 100
#define FRE 10
int main ()
{
    int data[DATA];
    int fre[FRE] = {0};
    srand (time(NULL));

    for (int i = 0 ; i < DATA ; i ++)
    {

    data[i] = (1+rand()%10);

    }

    for (int j = 0 ; j < DATA ; j ++)
    {
        ++fre[data[j]] ;
    }

    for (int x = 1 ; x < FRE ; x ++)
    {
        printf("Number \t Frequency \n  %d %10d \n",x,fre[x]);
    }


    return 0 ;
}

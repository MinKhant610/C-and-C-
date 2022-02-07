#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int sys ;
    srand (time(NULL));
    sys = (1+rand()%6);

    printf("%d",sys);
}

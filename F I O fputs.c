#include <stdio.h>
#include <stdlib.h>
int main ()
{

    FILE *fptr ;


    fptr = fopen("test.txt","w");

    if (fptr == NULL)
    {
        printf("NO FILE");
    }
    else {

        fputs("Hello my name is Min Khant \n ",fptr);

        printf("Process Success");
    }

    fclose(fptr);


    return 0 ;
}

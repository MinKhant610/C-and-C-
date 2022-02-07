#include <stdio.h>

int main ()
{

    FILE *fptr ;
    int age = 12 ;
    char name [] = "Entire";

    fptr = fopen("test2.txt","w");

    if (fptr == NULL)
    {
        printf("NO FILE");
    }
    else {

        fprintf(fptr,"Name : %s \t Age : %d\n",name,age);

        printf("Process Success");
    }

    fclose(fptr);


    return 0 ;
}

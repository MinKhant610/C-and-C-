#include <stdio.h>

int main ()
{

    FILE *fptr ;
    char c ;

    fptr = fopen("test3.txt","r+");

    if (fptr == NULL)
    {
        printf("NO FILE");
    }
    else {

            printf("________Reading The File _______ \n") ;

        while ((c = fgetc(fptr) ) != EOF )
        {
            printf("%c",c);

        }

        printf("\nProcess Success\n");
    }

    fclose(fptr);


    return 0 ;
}

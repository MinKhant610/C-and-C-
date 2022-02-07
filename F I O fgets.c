#include <stdio.h>

int main ()
{

    FILE *fptr ;
    char data_buffer [50] ;

    fptr = fopen("test2.txt","r+");

    fgets(data_buffer,12,fptr);
    printf("%s",data_buffer);

    fclose(fptr);


    return 0 ;
}

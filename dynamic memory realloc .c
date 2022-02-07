#include <stdio.h>
#include <stdlib.h>

int main ()
{

    char *ptr ;
    char *ptr2 ;

    ptr = malloc (10 * sizeof (ptr));
    strcpy (ptr , "re-allocation ");

    printf("%s , address at : %d \n",ptr,ptr);

    ptr2 = (char *) realloc (ptr , 50);
    strcat (ptr,"Min Khant (Code with Chill ) \n");

    printf("data is : %s , address : %d",ptr,ptr);

    free (ptr);
    printf("\n Memory was de-allocated \n");
    return 0 ;
}

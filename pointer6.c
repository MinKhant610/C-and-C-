#include <stdio.h>

int main ()
{
    int  *p;
    double dobarr[] = {1,2,3,4};
    double *dobptr = dobarr;

    char cha_arr[] = {1,2,3,4};
    char *cha_ptr = cha_arr ;

    printf("The sizeof dobarr[] %d bytes \n \n",sizeof(dobarr));
    printf("The sizeof dobptr %d bytes \n \n",sizeof(dobptr));

    printf("The sizeof cha_arr[] %d bytes \n \n",sizeof(cha_arr));
    printf("The sizeof cha_ptr %d bytes \n \n",sizeof(cha_ptr));

    printf("The sizeof pointer %d bytes \n \n",sizeof(p));


    return 0 ;
}

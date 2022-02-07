#include <stdio.h>

int main ()
{

    FILE *fptr ;
    if ((fptr= fopen("test4.txt","w"))== NULL)
    {
        puts("File not found");
    }
    else {

        puts("Enter account , age , name , balance ");
        puts("Enter EOF (Ctrl + d)keys to end input ");
        printf("> :");

        int account ;
        int age ;
        char name [20];
        int balance ;

        scanf("%d %d %s %d",&account,&age,name,&balance);

        while(!feof(stdin)) {


            fprintf(fptr,"%d %d %s %d\n",account,age,name,balance);
            printf("> :");
            scanf("%d %d %s %d",&account,&age,name,&balance);
        }

    }


    fclose(fptr);


    return 0 ;
}

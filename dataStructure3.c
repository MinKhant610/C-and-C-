#include <stdio.h>
#define STUDENT 3

struct school{

char name [20];
int marks;

}class[STUDENT];

int main ()
{
    int i = 1 ;

    for (int i = 1 ; i < STUDENT ; i ++)
    {
        printf("**************** \n");

        printf("The Roll number %d \n",i);

        printf("Enter name : ");
        scanf("%s",class[i].name);

        printf("Enter marks :");
        scanf("%d",&class[i].marks);

    }

    for (int i = 1 ; i < STUDENT ; i ++)
    {
        printf("_________________ \n");
        printf("Name : %s \n",class[i].name);
        printf("Marks :%d \n ",class[i].marks);
    }


    return 0 ;
}

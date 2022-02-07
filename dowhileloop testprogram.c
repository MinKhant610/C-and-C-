#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ans=0;

    do
    {
        printf("  Menu \n");
        printf("============\n");
        printf("1 - Gold Price \n ");
        printf("2 - Area of Circle\n");
        printf("3 - Exit \n");

        printf("Choose One : ");
        scanf("%d",&ans);

        switch (ans)
        {
            case 1 : printf("This is Gold Price \n ");
            break ;

            case 2 : printf("This is Area of Circle \n");
            break ;

            case 3 : printf("Exiting \n");
            break ;

            default: printf("Please Enter Number only (1 2 3 )");

        }
    }while (ans !=3);

    return 0;
}

#include <stdio.h>
#include <stdlib.h> //for exit function
void main ()
{

int ans ;

printf("  Title  \n");
printf ("\n");
printf("============================= \n");
printf("1 - Caculate Area of the circle \n");
printf("2 -Caculate Gold Price \n");
printf("3 - Exit \n");
printf ("\n");

printf("Please Choose the Opreation :");
scanf("%d",&ans);

if (ans == 1 )
{
    printf("The area of the circle \n");
}
else if (ans == 2 )
{
    printf("The gold price is ");

}
else if (ans == 3 )
{
    exit (2) ;
}
else {
    printf("Please enter number only (1 , 2, 3 )");
}

}

//switch can write this program like this

/* switch (ans) :
case 1 : printf("The area of circle ") ; break ;
case 2 : printf("The gold price  ") ; break ;
case 3 : exit () ; break ;
default : ("Please Enter number only (1 ,2 ,3 ) ) ;
*/

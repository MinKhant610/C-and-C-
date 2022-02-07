#include <stdio.h>

int main ()
{

char *str ;
str = "Hello my name is Min Khant";
printf("%s\n",str);


char *name[2]= {"orange","apple"};
int *p = &name[0] ;
int *ptwo = name ;


printf("%s\n",name[1]);
printf("The address of name (array) is : %d\n",ptwo);
printf("The address of the first element in array is : %d",p);

// the address of the array is equal to the address of the first element of that array
// the address of name(array) = the address of first element (orange);

return 0 ;
}

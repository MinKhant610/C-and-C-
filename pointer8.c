#include <stdio.h>
//pointer type casting
int main ()
{

int arr [] = {10,20,30,40,50,60};
int *p1 = arr ;
int *p2 = arr + 3 ;

printf("The number of element between two pointer %d \n",(p2-p1));
printf("The number of bytes between two pointer %d \n",(char*)p2 - (char*)p1);


/*

=>x * sizeof (original) / sizeof (new)
if size of original is integer the value must be 4
and size of new is character the value must be 1 ;

3 * 4 / 1 = 12

 */

}

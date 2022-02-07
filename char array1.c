#include <stdio.h>
#define ARR 100
int main ()
{
    char arr[ARR] ;

    printf("Enter your name :");
    gets(arr);

    printf("Your name is : %s",arr);

    return 0 ;
}
/*
char arr[8] = "Min Khant " ;
printf ("%c",arr);

scanf("%s",arr); is terminate (see space stop the string );
scanf ("%s[^\n]",arr) ; is good one but too long ;
gets (arr); is so good and too short but a little weakness ;

 */

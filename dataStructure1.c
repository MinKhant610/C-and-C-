#include <stdio.h>

struct collect {


int fValue ;
char cName ;

}collection; // name

int main ()
{
    //first way with name (collection)
    collection.fValue = 10;
    collection.cName = 'a';

    /*
    Second way without name

    struct collect collection ; (name)
    collection.fValue = 10 ;
    collection.cName = 'h';

     */

    printf("The value from structure : %d\n",collection.fValue);
    printf("The value from structure : %c\n",collection.cName);

    return 0 ;
}

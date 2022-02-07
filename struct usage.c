#include<stdio.h>

struct dog {

char name [10] ;
char type [10] ;
char color [10] ;
int age ;


};//mydog ={"GoatKyar" ,"ASCIAN","Black",6} ;


int main ()
{
    struct dog mydog={"GoatKyar" ,"ASCIAN","Black",6};
    struct dog *ptr_dog ;
    ptr_dog = &mydog ;

    printf("%d",ptr_dog->age);

    return 0 ;
}

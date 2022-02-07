#include <stdio.h>
#include <string.h>
#define ARR 100

int main ()
{


    char user[] = "Min Khant";
    char password[] = "minkhant";
    char user_name [ARR] ;
    char user_pass [ARR] ;
    int ui ;

    while ( ui != 0  ){

    printf("Enter your user name : ");
    gets(user_name);

    printf("Enter your password : ");
    gets(user_pass);

    if ( (strcmp(user,user_name)) == 0 && (strcmp(password,user_pass)) == 0 )
    {
        ui = 0 ;
        printf("Access Granted");
    }
    else {

        ui = 1 ;
        printf("Access Denied\n ");
    }

    }
    return 0 ;
}

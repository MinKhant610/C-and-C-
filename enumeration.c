#include <stdio.h>

int main ()
{
    enum colors {BLUE,GREEEN,RED};

    int i  ;

    for (i=BLUE ; i <= RED ; i ++ )
    {
        printf("%d\n",i);
    }

    return 0 ;
}

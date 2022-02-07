#include <stdio.h>

int main ()
{
    float radius , area ;

    printf("Enter the radius :");
    scanf("%f",&radius);

    area = 3.141593 * radius * radius ;
    printf ("Area = %f ",area);

    return 0 ;
}

#include <stdio.h>
void main ()
{
    float total_gold_price , pae , yway ;
    int gold_price_per_kyat , kyat ;

    printf("Enter the gold price per kyat :");
    scanf("%d",&gold_price_per_kyat);

    printf("Enter the kyat :");
    scanf("%d",&kyat);

    printf("Enter the pae :");
    scanf("%f",&pae);

    printf("Enter the yway :");
    scanf("%f",&yway);

    total_gold_price = gold_price_per_kyat * (kyat + (pae/16) + (yway / (8*16)));
    printf("Total Gold price %f ",total_gold_price);

}

#include<stdio.h>
#include<conio.h>

void main()
{
    //intialising variables
    float change;
    int coins = 0,quarter=0,dime=0,cent=0,penny=0; //since the no. of quarter dimes cents and pennys are gonna be in int 
    do
    {
        printf("change:",change);
        scanf("%f",&change);
    }
    while (change<=0);

    //for quarter
    while(change >= 0.25 )
    {
        coins++;
        quarter++;
        change = change - 0.25;
    }

    //for dimes
    while(change >= 0.10 && change < 0.25)
    {
        coins++;
        dime++;
        change = change - 0.10;
    }

    //for cents
    while(change >= 0.05 && change < 0.10)
    {
        coins++;
        cent++;
        change = change - 0.05;
    }

    //for pennys
    while(change < 0.05  && change > 0.00)
    {
        coins++;
        penny++;
        change = change - 0.01;
    }
    printf("coins : %d\n",coins);
    printf("Quarter:%d  Dime:%d  Cent:%d  Penny:%d\n",quarter,dime,cent,penny);
}

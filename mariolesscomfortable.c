#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,l;

    //gets input from user
    do
    {
        printf("Height:",i);
        scanf("%d",&i);
    }
    while(i<0 || i>23);

    //pyramid design
    for(j=0;j<i;j++)
    {
        // pyramid
        for(k=i-2;k>=j;k--)
        {
            printf(" ");
        }

        for(l=0;l<=j+1;l++)
        {
            printf("#");
        }
        printf("\n");
    }

}

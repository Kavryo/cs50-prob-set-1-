#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i,j,k,l,m;

    //gets input from user
    do
    {
        printf("Height:",i);
        scanf("%d",&i);
    }
    while(i<0 || i>24);

    //pyramid design
    for(j=0;j<i;j++)
    {
        //right side of pyramid
        for(k=i-1;k>j;k--)
        {
            printf(" ");
        }

        for(l=0;l<=j;l++)
        {
            printf("#");
        }

        //space between the pyramids
        printf("  ");

        //left side of pyramid
        for(m=0;m<=j;m++)
        {
            printf("#");
        }
        printf("\n");

    }

}

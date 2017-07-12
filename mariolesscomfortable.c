#include<stdio.h>
#include<conio.h>

void main()
{
    //intialising variables
    int i,j,k,l;

    //gets input from user
    do
    {
        printf("Height:",i);
        scanf("%d",&i);
    }
    while(i<0 || i>23);

    //pyramid design
    for(j=0;j<i;j++) //for no. of lines
    {
        
        for(k=i-2;k>=j;k--) //for printing spaces
        {
            printf(" ");
        }

        for(l=0;l<=j+1;l++) //for printing hashes
        {
            printf("#");
        }
        printf("\n");  //for new line
    }

}

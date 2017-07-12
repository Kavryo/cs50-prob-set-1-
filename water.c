#include<stdio.h>
#include<conio.h>

void main()
{
   //initialising variables
   int minutes,bottles;
   //to get valid input from the user  
   do
   {
    printf("Minutes:");
    scanf("%d",&minutes);
   }
   while(minutes<0);

   bottles = 12*minutes; //to convert minutes into bottles
   printf("Bottles:%d\n",bottles); //printing the no. of bottles
}

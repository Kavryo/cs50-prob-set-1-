#include<stdio.h>
#include<conio.h>

void main()
{
   int minutes,bottles;
   do
   {
    printf("Minutes:");
    scanf("%d",&minutes);
   }
   while(minutes<0);

   bottles = 12*minutes;
   printf("Bottles:%d\n",bottles);
}

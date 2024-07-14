//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
//Example: Input: 9561 Output 5961. Input: 3859 Output: 8359

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
y = ((x/100)/10)*100 + ((x/100)%10)*1000 + x%100;
printf ("Result = %d\n",y);
}
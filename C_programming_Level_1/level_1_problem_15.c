//Question: Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
//Example: Input: 9561 Output 9516. Input: 3859 Output: 3895

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
y = (x/100)*100 + (x%10)*10 + ((x%100)/10);
printf ("Result = %d\n",y);
}
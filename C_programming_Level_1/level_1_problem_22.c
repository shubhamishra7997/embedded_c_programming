//Question: Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.
// Example: Input: 685 Output 685. Input: 89172 Output: 89167

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
int a;
a = 0;
a = (x/10)%2;
y = x - (a * 5);
printf ("Result = %d\n",y);
}
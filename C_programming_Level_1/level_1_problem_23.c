// Question: Get a two digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, 
// then print the result. Do not use “if”.
// Example: Input: 95 Output 95. Input: 72 Output: 67

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
int a;
a = 0;
a = ((x / 10) + (x % 10)) % 2;
y = x - (a * 5);
printf ("Result = %d\n",y);
}
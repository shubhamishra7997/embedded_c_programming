//Question: Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
// Example: Input: 695 Output 690. Input: 182 Output: 182
// Here 695 is odd, so we printed 690. But since 182 is not odd, we simply printed 182.


#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
int a;
a = x%2;
y = x - (a * 5);
printf ("Result = %d\n",y);
}
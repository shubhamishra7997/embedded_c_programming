//Q: Get a two-digit number from user and make the ten’s digit as 1, then print it.
//A: Input: 95 Output 15. Input: 82 Output: 12

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
y = 10 + (x%10);
printf ("Result = %d\n",y);
}
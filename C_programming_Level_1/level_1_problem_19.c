//Question: Get a three-digit number from user and make the one’s digit as 2, then print it.
//Example: Input: 695 Output 692. Input: 182 Output: 182

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
y = (x/10)*10 + 2 ;
printf ("Result = %d\n",y);
}
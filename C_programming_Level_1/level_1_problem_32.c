/*
Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, otherwise print the difference.

Example: Input: 56 78 – Output: 22
Input: 14 65 - Output: 79
*/


#include<stdio.h>
int main ()
{
int x1,x2;
int a,b,c;
printf ("Enter Number 1: ");
scanf("%d",&x1);
printf ("Enter Number 2: ");
scanf("%d",&x2);

a = x1 + x2;
b = x1 - x2;
c = x2 - x1;
if (a < 100)
    printf("Output is: %d\n", a);
else if ( b > 0)
{
    printf("Output is: %d\n", b);;
}
else
    printf("Output is: %d\n", c);
}


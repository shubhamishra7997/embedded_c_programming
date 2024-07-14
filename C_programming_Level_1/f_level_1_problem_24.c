//Question: Get a three-digit number from user and subtract 5 from that number if
//one’s digit number and 100’s digit number are same, then print the
//result. Do not use “if”.

//Example: Input: 595 Output 590. Input: 372 Output: 372

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
int a,b,c;
//get the hundred digit value.
a = (x/100);
//get the one's digit.
b = (x%10);
// if difference is zero, then subtract 5.
// if the difference is not zero then we want the same number.
c = (a == b);
y = x - (c * 5);
printf ("Result = %d\n",y);
}
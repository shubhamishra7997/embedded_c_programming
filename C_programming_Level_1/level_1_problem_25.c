// Question: Question: Get a four-digit number from user and subtract 5 from that number if
// ten’s digit position and 100’s digit position is same, then print the result.
// Do not use “if”.
// Example: Input: 7595 Output 7595. Input: 3772 Output: 3767

#include<stdio.h>
int main ()
{
int x,y;
printf ("Enter Number : ");
scanf("%d",&x);
int hundred,ten,compare;
//get the hundred digit value.
hundred = (x/100)%10;
//get the one's digit.
ten = (x%100)/10;
// if difference is zero, then subtract 5.
// if the difference is not zero then we want the same number.
compare = (hundred == ten);
y = x - (compare * 5);
printf ("Result = %d\n",y);
}
// Question: Get a four-digit number from user. If the sum of the ten’s digit and
// hundred’s digit is greater than 10, then print “Success”, otherwise print “Failure”.
// Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Success.

#include<stdio.h>
int main ()
{
int x,y;
int tens, hundreds;
printf ("Enter Number : ");
scanf("%d",&x);

tens = (x/10)%10;
hundreds = (x/100)%10;

y = tens + hundreds;
if (y > 10)
    printf("Success");
else
    printf("Failure");

}

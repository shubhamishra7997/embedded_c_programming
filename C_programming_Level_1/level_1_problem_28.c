// Question: Get a three-digit number from user. If the sum of the one’s digit and
//hundred’s digit is less than 10, then print “Success”, otherwise print “Failure”.

// Example: Input: 569 - Output Failure. Input: 316 - Output: Success.

#include<stdio.h>
int main ()
{
int x,y;
int ones, hundreds;
printf ("Enter Number : ");
scanf("%d",&x);

ones = x%10;
hundreds = x/100;

y = ones + hundreds;
if (y < 10)
    printf("Success");
else
    printf("Failure");

}

// Question: Get a three-digit number from user. If the sum of the digits is 10 then
//print “Success”, otherwise print “Failure”.
// Example: Input: 956 - Output Failure. Input: 127 - Output: Success.

#include<stdio.h>
int main ()
{
int x,y;
int ones,tens, hundreds;
printf ("Enter Number : ");
scanf("%d",&x);

ones = x%10;
tens = (x/10)%10;
hundreds = x/100;

y = ones + tens + hundreds;
if (y == 10)
    printf("Success");
else
    printf("Failure");

}

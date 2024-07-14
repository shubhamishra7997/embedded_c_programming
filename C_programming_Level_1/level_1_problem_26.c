// Question: Get a two-digit number from user. If the sum of the digits is 10 then print //“Success”, otherwise print “Failure”.
//Example: Input: 56 - Output Failure. Input: 37 - Output: Success.

#include<stdio.h>
int main ()
{
int x,y;
int ones,tens;
printf ("Enter Number : ");
scanf("%d",&x);

ones = x%10;
tens = x/10;

y = ones + tens;
if (y == 10)
    printf("Success");
else
    printf("Failure");

}
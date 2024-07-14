/*
Question: Get a four-digit number from user. If the sum of the ten’s digit and
hundred’s digit is equal to 10, and one of the digits is more than 7 then
print “Success”, otherwise print “Failure”.

Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Success.
*/

#include<stdio.h>
int main ()
{
int x,y;
int tens, hundreds;
printf ("Enter Number : ");
scanf("%d",&x);

tens = (x/10)%10;
printf ("Tens : %d\n", tens);
hundreds = (x/100)%10;
printf ("Hundreds : %d\n", hundreds);

y = tens + hundreds;
if ((y == 10) && ((tens > 7) || ( hundreds > 7)))
    printf("Success");
else
    printf("Failure");

}


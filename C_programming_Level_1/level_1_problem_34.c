/*
Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and
hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s
digit

Example: Input: 856 978 – Output: 1
Input: 128 365 - Output: 2
*/


#include<stdio.h>
int main ()
{
int x1,x2;

printf ("Enter Number 1: ");
scanf("%d",&x1);
printf ("Enter Number 2: ");
scanf("%d",&x2);

int tens1, tens2;
tens1 = (x1/10)%10;
tens2 = (x2/10)%10;

int ones, hundreds, diff;
if (tens1 > tens2)
    {
        ones = (x1%10);
        hundreds = (x1/100);
    if (ones > hundreds)
        {
            diff = ones - hundreds;
            printf("Output: %d\n", diff);}
    else
        {
            diff = hundreds - ones; 
            printf("Output: %d\n", diff);
        }
    }
else
{
    ones = (x2%10);
    hundreds = (x2/100);
    if (ones > hundreds)
        {diff = ones - hundreds;
        printf("Output: %d\n", diff);}
    else
        {diff = hundreds - ones; 
        printf("Output: %d\n", diff);}
}
//printf("Output is: %d\n", b);
}


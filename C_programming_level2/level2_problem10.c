/*
Question: Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.
Answer: 375
*/

#include<stdio.h>
int main ()
{
int x;
x = 0;
int tens, sum;
tens = 0;
sum = 0;
loop: if(x < 100)
{
    tens = (x/10);
    if((x>10) && (tens == 7) && (x%2 != 0))
    {
        sum = sum + x;
    }
    x = x + 1;
goto loop;
}
printf("%d\n",sum);
}
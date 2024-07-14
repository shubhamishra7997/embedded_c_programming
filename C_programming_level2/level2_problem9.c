/*
Question: Write a loop program to print the sum of two-digit numbers whose one’s digit is 5.

Answer: 495
*/

#include<stdio.h>
int main ()
{
int x;
x = 0;
int ones, sum;
ones = 0;
sum = 0;
loop: if(x < 100)
{
    ones = (x%10);
    if((x>10) && (ones == 5))
    {
        sum = sum + x;
    }
    x = x + 1;
goto loop;
}
printf("%d\n",sum);
}
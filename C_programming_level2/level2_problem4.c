/*
Question: Write a loop program to print sum of 6 to 1.
Answer: 21
*/

#include<stdio.h>
int main ()
{
int x;
x = 6;
int sum;
sum = 0;
loop: if(x > 0)
{
    sum = sum + x ;
    x--;
goto loop;
}
printf("%d\n",sum);
}
/*
Question: Write a loop program to print odd numbers 1 to 9.
Answer: 1
3
5
7
9
*/

#include<stdio.h>
int main ()
{
int x;
x = 0;
loop: if(x < 10)
{
    if(x%2 != 0)
    {
        printf("%d\n",x);
    }
    x = x + 1;
goto loop;
}
}
/*
Question: Write a program to get a number from user and print the reverse of that number

Answer: Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576
*/

#include<stdio.h>
int power(int);
int main ()
{
int x;
scanf("%d", &x);
int original;
original = x;
int len, temp, rev;
len = 0;
rev = 0;
temp = 0;

//Calculate the length of numbers
while(x != 0)
{
    len++;
    x = x/10;
}

//Print reverse
while(len != 0)
{      
    len--;
    int a;
    a = power(len);
    temp = (original%10)*(a);
    rev = temp + rev;
    original = original/10;
}
printf("Reverse is: %d\n", rev);
}

//can be replace by math.h
int power (int length)
{
int res;
res = 1;
while(length != 0)
{
    res = res * 10;
    length--;
}
return res;
}
/*
Question: Write a program to get number from user, print whether that number’s
first two digits (ten’s digits and one’s digit) is prime.

Answer: Input: 359 - Output: Prime
Input: 3577 - Output: Not Prime
*/


#include<stdio.h>
int power (int);
int main ()
{
int x;
scanf("%d", &x);

//sum of digits
int original;
original = x;
int len,num;
len = 0;
num = 0;

//Calculate the length of numbers
while(x != 0)
{
    len++;
    x = x/10;
}
//printf("Len is: %d\n", len);

//get first two digits (ones and tens)
if (len>2)
{
    num=original%100;
}
else
{
    num = original;
}

//prime or not.

int not_prime;
not_prime=0;
printf("flag is set to: %d\n", not_prime);
for(int i=2; i<num; i++)
{
    if (num%i == 0)
        {
            //printf("%d is not prime and is divisble by %d\n", original,i);
            not_prime = 1;
            break;
        }
    //printf("flag is set to: %d\n", not_prime);
}
if(not_prime == 1 )
    printf("%d is Not Prime ", num);
else
    printf("%d is Prime", num);
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

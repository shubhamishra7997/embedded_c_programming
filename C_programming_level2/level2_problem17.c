/*
Question: Write a program to get a number from user, print whether that number is 
prime, and sum of digit is equal to 14.

Answer: Input: 59 - Output: Prime & Sum of Digits is 14
Input: 77 - Output: Not Prime but sum of digits is 14
Input: 13 - Output: Prime, but sum of Digits is not 14
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
int len,sum;
len = 0;
sum = 0;

//Calculate the length of numbers
while(x != 0)
{
    len++;
    x = x/10;
}
//printf("Len is: %d\n", len);

//calculate sum
int mult,a, temp;
mult = 0;
a = original;
temp = original;
while(len !=0)
{   
    //printf("len is: %d\n", len);
    mult = power(len-1);
    //printf("mult is: %d\n", mult);
    a = a/mult; 
    //printf("unit value is: %d\n", a);
    sum = sum + a;
    //printf("sum temp is: %d\n", sum);
    temp = temp - a*mult; 
    //printf("temp value is: %d\n", temp);
    a = temp;
    len--;  
}

//prime or not.

int not_prime;
not_prime=0;
printf("flag is set to: %d\n", not_prime);
for(int i=2; i<original; i++)
{
    if (original%i == 0)
        {
            printf("%d is not prime and is divisble by %d\n", original,i);
            not_prime = 1;
            break;
        }
    printf("flag is set to: %d\n", not_prime);
}
if(not_prime == 1 && sum == 14)
    printf("%d is Not Prime but sum of digits is %d", original, sum);
else if (not_prime == 0 && sum == 14)
    printf("%d Prime & Sum of Digits is %d", original, sum);
else if (not_prime == 0 && sum != 14)
    printf("% d is Prime, but sum of Digits is not 14, it is %d", original, sum);
else
    printf("%d is Not Prime & sum of digits is also not 14, it is %d", original, sum);
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

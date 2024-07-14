/*
Question: Write a program to get a number from user and interchange the first and last digits and print the result.
Answer: Input : 123456 - Output – 623451
Input : 76895439- Output – 96895437
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
int len, rev;
len = 0;
rev = 0;

//Calculate the length of numbers
while(x != 0)
{
    len++;
    x = x/10;
}

//Print reverse first and last digit
/*
a = divide the number by its power(len-1) (for len>1, if len=1, print the number as it is), this is the units value.
b = now take the units value (xmod10) and multiply it by power(len-1). you get the highest place value.
c = now for the middle digits: take the number and subtract the units value, and then take the modulus pwoer(len-1)
*/
int mult,a,b,c;
if(len>1)
{

    mult = power(len-1);
    //printf("power is: %d\n", mult);
    a = original / mult;
    //printf("Units place is: %d\n", a);
    b = (original % 10) * mult;
    //printf("Highest place value is: %d\n", b);
    c = (original - (original%10)) % mult; 
    //printf("middle values are: %d\n", c);
    rev = a + b + c;
}
else
{
    rev = original;
}
printf("Answer is: %d\n", rev);
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

/*
eg: 675, a = 675/100 = 6; b = 5*100 = 500; c = (x-b)%mod(1000)//670mod100=70;
rev = a+b+c=6+500+70=576.
if x = 4567, then len=4, power(len-1) = 1000; a = 4567/1000=4, b = 7000, c = 4560mod1000=560;
rev = 4+7000+560=7564;
x=56; power=10;
a = 56/10=5; b=6*10=60;c=(56-6)%10=0  
*/
/*
Question: Write a program to get a number from user and if the last digit of the 
number is even print the same number. If the last digit of the number is 
odd then subtract 1 from the last digit and print the number.
(Note: Last digit -MSB)
Answer: Input : 223456 - Output – 223456
Input : 96895439- Output – 86895439
Input : 675 – Output - 675
*/

#include<stdio.h>
int power(int);
int main ()
{
int x;
scanf("%d", &x);
int original;
original = x;
int len, ans;
len = 0;
ans = 0;

//Calculate the length of numbers
while(x != 0)
{
    len++;
    x = x/10;
}

//get the MSB
int mult,msb, a, b;
a=0;
mult = 0;
b = 0;
msb = 0;
mult=power(len-1);
printf("MULT  is: %d\n", mult);
msb = original/mult;
printf("MSB is: %d\n", msb);
if (msb%2 == 0)
{
    //its an even MSB
    printf("EVEN MSB is: %d\n", msb);
    ans = original; //unchanged number
}
else
{
    printf("ODD MSB is: %d\n", msb);
    b = (msb-1)*mult; //msb - msb-1 times power(len-1)
    printf("ODD MSB -1 is: %d\n", b);
    a = (original)%mult; //remaining digits
    printf("remaining digits are: %d\n", a);
    ans = a + b;
}

printf("Answer is: %d\n", ans);
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
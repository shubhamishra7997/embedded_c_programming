//Question: Write a program to print biggest 4-digit number which is divisible by 7 and 9.

#include<stdio.h>

int main()
{
    printf("Start of solution!\n");
    int x;
    for(x=9999;x>0;x--)
    {
        if((x % 7 == 0) && (x % 9 == 0))
        {
            printf("Biggest number that is divisble by 4 and 9 is: %d\n",x);
            break;
        }
    }
    return 0;
    printf("End of solution!\n");
}
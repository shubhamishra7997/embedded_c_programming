//Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.

#include<stdio.h>

int main()
{
    printf("Start of solution!\n");
    int x, imodten, sum, i;
    for(x=99;x>0;x--) 
    {
        sum = 0;
        i = x;
        while(i>0) 
        {
            imodten = i%10; 
            sum = sum + imodten; 
            if(sum>14)
            {
                printf("Sum overcooked for %d\n",x);
                break;
            }
            else
            {
                i = i/10; 
            }   
        }
        if (sum == 14)
            {
                printf("Sum is equal to 14 for number: %d\n", x);
            }
        
    }
    
    return 0;
    printf("End of solution!\n");
}
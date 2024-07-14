//Question: Write a program get number from user print the total number digits which are odd in the number.
//Answer: Input : 12345678 - Output : 4 (1,3,5,7)
//Logic: Take the input (int) and then mod it by 10, the remainder be divided by 2. If result is not zero, increment count. 
// Loop it for all numbers with while loop.

#include<stdio.h>

int main()
{
    printf("Start of solution!\n");
    int x, count, xmodten;
    count = 0;
    printf("Enter input\n");
    scanf("%d", &x);
    printf("Input is: %d\n", x);
    while(x>0)
    {
        xmodten = x%10;
        printf("New number is: %d\n", xmodten);
        if((xmodten %2) != 0)
        {
            printf("Odd digit found: %d\n", xmodten);
            count = count + 1;
        }
        x = x/10;
        printf("Total number of odd digits are: %d\n", count);
    }
    printf("End of solution!\n");
    return 0;
}
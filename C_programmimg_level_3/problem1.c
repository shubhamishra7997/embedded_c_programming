//Question: Get a number from user and add 2 to that number and print the result.
//Write your code inside the function. Do not Change the Code.
//Example: Input :45 Output 47. Input:56789 Output:56791

#include<stdio.h>
int function (int no);

int main()
{
    int number1, number2;
    scanf("%d",&number1);
    number2 = function(number1);
    printf("%d",number2);
    return 0;
}

int function (int no1)
{
    int no2;
    no2 = no1 + 2;
    return no2;
}
//Question: Get two numbers from user and compare the numbers. If same print “Same” otherwise print “Not Same”. Write your code inside the function.
//Do not Change the format.

//Example: Input: 123, 123 Output: Same. Input: 56789,12345 Output: “Not Same”

#include <stdio.h>
int compare_numbers(int no1,int no2);
int main()
{
int number1,number2,result;
scanf("%d",&number1);
scanf("%d",&number2);
result = compare_numbers(number1,number2);
if(result == 1)
printf("Same");
else
printf("Not Same");
return 0;
}
int compare_numbers(int no1,int no2)
{
int result;
result = (no1 == no2) ? 1:0;
return result;
}
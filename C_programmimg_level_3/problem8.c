//Question: Get a number from user and check whether the digits are in ascending order.
//Example: Input: 1234 Output: Yes. Input: 5687 Output: No

#include <stdio.h>
int check_assending(int no);
int main()
{
int number, result;
scanf("%d",&number);
result = check_assending(number);
if(result == 1)
printf("Yes");
else
printf("No");;
return 0;
}
int check_assending(int no)
{
int result;
while(no!=0)
{
    if((no%10) < ((no%100)/10))
    {
        result = 0;
        break;
    }
    result = 1;
    no = no/10;
    
}
return result;
}
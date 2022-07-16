// divisible by 7 or 3
#include<stdio.h>
int main()
{
int n;
printf("Enter the no");
scanf("%d",&n);
if(n%3==0 || n%7==0)
printf("no is either divisible by 3 or 7 or both");
else
printf("no is neither divisible by 3 nor 7");

    return 0;
}
// divisible by 3 & 2
#include<stdio.h>
int main()
{
int n;
printf("Enter the no");
scanf("%d",&n);
if(n%2==0 && n%3==0)
printf("it is divisible by both 3 and 2");
else
printf("it is not divisible by both");
    return 0;
}
// 3digit number or not
#include<stdio.h>
int main()
{
int n,s=0;
printf("Enter the number");
scanf("%d",&n);
while(n)
{
n=n/10;
s++;
}
if(s==3)
printf("it's a 3 digi number");
else
printf("it's not a 3 digit number");
    return 0;
}
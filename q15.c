#include<stdio.h>
int main()
{
int n;
printf("Enter the no");
scanf("%d",&n);
if(n>0)
printf("positive");
else
if(n==0)
printf("0");
else
printf("negative");

    return 0;
}
#include<stdio.h>
int main()
{
int a,b,c,d,e;
float avg;
printf("Enter the marks");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
avg= (a+b+c+d+e)/5;
if(avg>=33)
printf("pass");
else
printf("fail");
    return 0;
}
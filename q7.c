#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the coefficients of quad eq");
scanf("%d%d%d",&a,&b,&c);
d=b*b-(4*a*c);
if(d>0)
printf("roots are real and distinct");
else
if(d==0)
printf("roots are real and equal");
else
printf("roots are imaginary");
    return 0;
}
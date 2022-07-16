// triangle is valid or not
#include<stdio.h>
int main()
{
int l,b,h;
printf("Enter l,b,h of triangle");
scanf("%d%d%d",&l,&b,&h);
if(l+b>h || b+h>l || l+h>b)
printf("valid triangle");
else
printf("not valid triangle");
    return 0;
}
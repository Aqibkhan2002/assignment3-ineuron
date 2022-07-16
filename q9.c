// grweatest among 3 no's
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 no's");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
   if(c>a)
   printf("greatest no = %d",c);
   else
   printf("greatest no = %d",a);
else
   if(c>b)
   printf("greatest no = %d",c);
   else   
   printf("greatest no = %d",b);

    return 0;
}
#include<stdio.h>
int main()
{
int n;
printf("Enter month no");
scanf("%d",&n);
switch(n)
{
case(1):
printf("no of days = 31");
break;
case(2):
printf("no of days = 28");
break;
case(3):
printf("no of days = 31");
break;
case(4):
printf("no of days = 30");
break;
case(5):
printf("no of days = 31");
break;
case(6):
printf("no of days = 30");
break;
case(7):
printf("no of days = 31");
break;
case(8):
printf("no of days = 31");
break;
case(9):
printf("no of days = 30");
break;
case(10):
printf("no of days = 31");
break;
case(11):
printf("no of days = 30");
break;
case(12):
printf("no of days = 31");
break;
default:
printf("no valid month no");}
    return 0;
}
#include<stdio.h>
int main()
{
char s;
printf("Enter the alphabet");
scanf("%c",&s);
if(s>= 65 && s<=90 )
printf("uppercase alphabet");
if(s>=97 && s<=122)
printf("lowercase alphabet");
    return 0;
}
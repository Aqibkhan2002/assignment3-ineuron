#include<stdio.h>
int main()
{
  char s;
  printf("Enter the character");
  scanf("%c",&s);
 if(s>= 97 && s<=122 )
 printf("lowercase alphabet");
 if(s>= 65 && s<=90 )
 printf("uppercase alphabet");
  if(s>=48  && s<=64 )
 printf("digit");
  if((s>=32  && s<=47) || (s>=58 && s<=64) || (s>=91 && s<=96) || (s>=123 && s<=126) )
 printf("special character");
  return 0;
}
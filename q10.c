#include<stdio.h>
int main()
{
    float cp,sp;
printf("Enter cost price , selling price");
scanf("%f%f",&cp,&sp);
if(cp<sp)
printf("profit percentage = %0.2f",((sp-cp)/cp)*100);
else
printf("loss percentage = %0.2f",((cp-sp)/cp)*100);

    return 0;
}
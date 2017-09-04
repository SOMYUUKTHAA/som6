#include<stdio.h>
int main()
{
int year,n;
printf("ENTER ANY YEAR");
scanf("%d",&year);
n=year%4;
if(n==0)
{
 if(year%100==0)
 {
    if(year%400==0)
    {
    printf("%d IS A LEAP YEAR",year);
    }
    else
    {
    printf("%d IS NOT A LEAP YEAR",year);
    }
 }
 else
 printf("ENTERED YEAR %d IS NOT A LEAP YEAR",year);
}
else
{
printf("ENTERED YEAR IS %d NOT A LEAP YEAR",year);
}
}

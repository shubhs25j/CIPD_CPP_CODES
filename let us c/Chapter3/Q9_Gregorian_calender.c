#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year  \n");
    scanf("%d",&year);
    year=year-1900;
    int leapYear = year/4;
    int days= leapYear*366 + (year-leapYear)*365;
    int day=days%7;
    // printf("%d",day);
    if (day==0)
    printf("Sunday");
    else if(day==1)
    printf("monday");
    else if(day==2)
    printf("tuesday");
    else if(day==3)
    printf("wednesday");
    else if(day==4)
    printf("thereday");
    else if (day==5)
    printf("friday");
    else if(day==6)
    printf("saturday");





   return 0;
}
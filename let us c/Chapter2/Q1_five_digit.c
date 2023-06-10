#include<stdio.h>
int main()
{
    int num;
    printf("Enter Five digit number :\n");
    scanf("%d",&num);
    int sum = num % 10; //4 remaining
    num=num/10;
    //printf("%d\n",num);
    sum = sum+(num % 10);//3 remaining
    num=num/10;
     //printf("%d\n",num);
    sum = sum+(num % 10);// 2remaining
    num=num/10;
     //printf("%d\n",num);
    sum = sum+(num % 10);//1 remaining
    num=num/10;
    sum =sum+num;
    printf("The sum of the digits is %d",sum);

    return 0;
}
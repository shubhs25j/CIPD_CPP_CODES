#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("The value of a and b are %d , %d ",a,b);
}
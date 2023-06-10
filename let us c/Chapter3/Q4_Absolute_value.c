#include<stdio.h>
#include<math.h>
int main()
{    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if(num>=0)
    {
        printf("The absolute value is %d",num);
    }
    else if (num<0)
    {
        int ab_num=sqrt(num*num);
        printf("the absolute value is %d",ab_num);
    }
    
    return 0;
}
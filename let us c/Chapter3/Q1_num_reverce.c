#include<stdio.h>
int main()
{
    int number,original_number;
    printf("Enter the number 0f 5 digits:\n");
    scanf("%d",&number);
    original_number=number;
    int temp = number %10;
    number = number/10;//4
    temp=temp*10+(number%10);

    number=number/10;//3
    temp=temp*10+(number%10);

    number=number/10;//2
    temp=temp*10+(number%10);

    number=number/10;//1
    temp=temp*10+(number%10);

    // number=number/10;//0
    // temp=temp*10+(number%10);
    // printf("%d",temp);
    
    printf("%d",temp);
    if(original_number==temp)
        printf("\nThe number are equal");
    else
        printf("\nthe numbers are not equal");
    return 0;

}
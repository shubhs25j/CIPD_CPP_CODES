#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the value of Sides \n");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side1==side3)
    printf("Tranagl is equalatral \n");
    else if(side1==side2||side2==side3||side3==side1)
    printf("Trangal is isoscalas \n");
    else if(side1*side1==side2*side2+side3*side3)
    printf("Trangal is right angaled");
    else if(side2*side2==side1*side1+side3*side3)
    printf("Trangal is right angaled");
    else if(side3*side3==side1*side1+side2*side2)
     printf("Trangal is right angaled");
    else 
    printf("Trangal is scaler");
    return 0;
}
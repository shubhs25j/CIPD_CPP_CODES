#include<stdio.h>
#include<math.h>
int main()
{
    float angle;
    float SIN,COS,TAN,COT,SEC,COSEC;
    printf("Enter the value of angle:\n");
    scanf("%f",&angle);
    angle=angle*(3.14/180);
    SIN=sin(angle);
    COS=cos(angle);
    TAN=tan(angle);
    COT=1/tan(angle);
    SEC=1/cos(angle);
    COSEC=1/sin(angle);
    printf("\nThe value of sin is: %.2f ",SIN);
    printf("\nThe value of cos is: %.2f ",COS);
    printf("\nThe value of tan is: %.2f ",TAN);
    printf("\nThe value of cot is: %.2f ",COT);
    printf("\nThe value of sec is: %.2f ",SEC);
    printf("\nThe value of cosec is: %.2f ",COSEC);
    
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    float t,v;
    printf("Enter the value of Temperture:\n");
    scanf("%f",&t);
    printf("Enter the velocity of wind \n");
    scanf("%f",&v);
    float wcf =(35.74+(0.6215*t)+ ((0.4275*t)-35.75)*pow(v,0.16));
    printf("%f",wcf);

    return 0;
}
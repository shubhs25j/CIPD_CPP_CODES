#include <stdio.h>
int main()
{
    float weight;
    float height;
    float BMI;
    printf("Enter your Weight in KG's: \n");
    scanf("%f", &weight);
    printf("Enter your height in meters: \n");
    scanf("%f", &height);
    BMI = weight / (height * height);
    if (BMI < 15)
        printf("starvation");
    else if (15.1 >= BMI && BMI >= 17.5)
        printf("Anorexic");
    else if (17.6 >= BMI && BMI >= 18.5)
        printf("Underweight");
    else if (18.6 >= BMI && BMI >= 24.9)
        printf("Ideal");
    else if (25 >= BMI && BMI >= 25.9)
        printf("Overweight");
    else if (30 >= BMI && BMI >= 30.9)
        printf("Obese");
    else if (BMI >= 40)
        printf("Morbidly Obese");

    return 0;
}
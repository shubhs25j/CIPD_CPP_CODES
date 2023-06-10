#include <stdio.h>
int main()
{
    int hardness;
    float corboan_content;
    int tensile_strength;
    int gread;
    char condition_1, condition_2, condition_3;
    printf("Enter the value of Hardness\n");
    scanf("%d", &hardness);
    printf("Enter the value of Corbon content\n");
    scanf("%f", &corboan_content);
    printf("Enter the value of Tensile strength\n");
    scanf("%d",&tensile_strength);
    if (hardness > 50)
        condition_1 = 'y';
    else
        condition_1 = 'n';
    if (corboan_content < 0.7)
        condition_2 = 'y';
    else
        condition_2 = 'n';
    if (tensile_strength > 5600)
        condition_3 = 'y';
    else
        condition_3 = 'n';
    if (condition_1 == 'y' && condition_2 == 'y' && condition_3 == 'y')
    {
        gread = 10;
        printf("The Gread of the still is %d\n", gread);
    }
    else if (condition_1 == 'y' && condition_2 == 'y' && condition_3 == 'n')
    {
        gread = 9;
        printf("The Gread of the still is %d\n", gread);
    }
    else if (condition_1 == 'n' && condition_2 == 'y' && condition_3 == 'y')
    {
        gread = 8;
        printf("The Gread of the still is %d\n", gread);
    }
    else if (condition_1 == 'y' && condition_2 == 'n' && condition_3 == 'y')
    {
        gread = 7;
        printf("The Gread of the still is %d\n", gread);
    }
    else if (condition_1 == 'y' || condition_2 == 'y' || condition_3 == 'y')
    {
        gread = 6;
        printf("The Gread of the still is %d\n", gread);
    }
    else
    {
        gread = 5;
        printf("The Gread of the still is %d\n", gread);
    }

    return 0;
}
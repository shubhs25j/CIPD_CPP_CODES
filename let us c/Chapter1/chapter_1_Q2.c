#include<stdio.h>
#define pi 3.14
int main()
{  
    int radius,length,breadth;
    printf("Enter the radius of circule: ");
    scanf("%d",&radius);
    float area_of_circul= pi*pi*radius;
    printf("The area of circule is %f:\n",area_of_circul);
    float circumference_of_circule = 2*pi*radius;
    printf("The perimeter of circul is: %f\n",circumference_of_circule);

    printf("Enter the length and breadth of rectangal:\n ");
    scanf(" %d %d",&length,&breadth);
    int area_of_rectangal=length*breadth;
    printf("the are of a rectangal is %d",area_of_rectangal);
    int perimeter_of_rectangal = 2*(length+breadth);
    printf("\nthe perimeter of rectangal is :%d",perimeter_of_rectangal);
    return 0;
}
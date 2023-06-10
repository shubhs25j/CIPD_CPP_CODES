#include<stdio.h>
int main()
{
    int length,breadth;
    printf("Enter the length and breadth of rectangle :\n");
    scanf("%d%d",&length,&breadth);
    int area = length*breadth;
    int perimeter= 2*(length+breadth);
    if(area>perimeter)
        printf("the are is greater\n");
    else if (area<perimeter)
        printf("the perameter is greater");
    else
    printf("are and perimeter is same");
    return 0;

}
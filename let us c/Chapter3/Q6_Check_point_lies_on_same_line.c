#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the value of first point :\n");
    scanf("%d%d",&x1,&y1);

    printf("Enter the value of secand point :\n");
    scanf("%d%d",&x2,&y2);

    printf("Enter the value of third point :\n");
    scanf("%d%d",&x3,&y3);
    
    float slop1=(y2-y1)/ (x2-x1) ;//= (y3 – y2)/ (x3 – x2)
    float slop2=(y3-y2)/ (x3-x2);

    if(slop1==slop2)
    {
        printf("The points are lie on stright line ");
    }
    else
    printf("The pots are not lie on stringht line");

    return 0;
}
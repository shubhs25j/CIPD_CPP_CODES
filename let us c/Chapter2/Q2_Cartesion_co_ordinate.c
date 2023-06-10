#include<stdio.h>
#include<math.h>
int main()
{
    int x,y ;
    printf("Enter the value of co-ordinates: ");
    scanf("%d %d",&x,&y);
    printf("\nThe X and Y co-ordinate are: %d and %d :",x,y);
    float r = sqrt((x*x)+(y*y));
    float  k = (atan(y/x));
    printf("\nThe value of poral co ordinate is (%f,%f): ",r,k);



    return 0;
}
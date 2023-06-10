#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the co-ordinate of points \n");
    scanf("%d%d",&x,&y);
    if(x==0 && y!=0)
      printf("The point is lie on X axis\n");
    else if(x!=0 && y==0)
      printf("The point is lie on Y axis\n");
    else if(x==0 && y==0)
       printf("The point is lie on origin\n");
       else
       printf("the point is not on origin and also not on x and y axis ");
    return 0;
}
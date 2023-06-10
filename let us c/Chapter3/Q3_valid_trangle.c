#include<stdio.h>
int main()
    {
        int angle1,angle2,angle3;
        printf("Enter the 3 angels of a trangal ");
        scanf("%d%d%d",&angle1,&angle2,&angle3);
        if(angle1+angle2+angle3==180)
        printf("it is a valid trangel");
        else
        printf("it is not an valid trangle");
        return 0;
      
    }

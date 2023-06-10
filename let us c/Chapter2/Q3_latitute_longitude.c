#include<stdio.h>
#include<math.h>
int main()
{   float L1,L2,G1,G2;
    printf("Enter the co-ordinate of latitude:\n ");
    scanf("%f %f",&L1,&L2);
    printf("Enter the co-ordinate of longitude:\n");
    scanf("%f %f",&G1,&G2);
    float D= 3963*acos( (sin(L1)*sin(L2)) + ((cos(L1)*cos(L2))*(cos(G2-G1))) );
    printf("%.2f",D);

    return 0;

}
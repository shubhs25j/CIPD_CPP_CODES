#include<stdio.h>
int main()
{
    int a=0;
    while(a<=255)
    {
        printf("The ASCCI value of %c = %d\n",a,a);
        a++;
    }
    
    return 0;
}

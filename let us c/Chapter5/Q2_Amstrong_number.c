#include<stdio.h>
#include<math.h>
int main()
{
    int num=0, count=1,remainder,sum;
    while(count<=500)
    {
        num=count;
        sum=0;
        while(num)
        {
            remainder=num%10;
            sum =sum+(remainder*remainder*remainder);
            num=num/10;
        }
        if(count==sum)
        {
            printf("%d\n",count);
        }
        count++;
    }
      return 0;
}
    // int number=1;
    // int temp;
    // while(number<=500)
    // {
    //     if(number<10)
    //     {
    //      if(number==pow(number,3))
    //      {
    //         printf("%d\n",number);
    //      }
    //     }
    //     else if(number<100)
    //     {
    //         int temp1;
    //         int original_num=number;
    //         temp1=number%10;
    //         number=number/10;
    //         if(original_num==pow(temp1,3)+pow(number,3))
    //         {
    //             printf("%d\n",original_num);
    //         }   
    //     }
    //     else if(number<=500)
    //     {
    //         int temp2,temp3;
    //         int original_num=number;
    //         temp2=number%10;
    //         number=number/10;
    //         temp3=number%10;
    //         number=number/10;
    //         if(original_num==pow(temp2,3)+pow(temp3,3)+pow(number,3))
    //         {
    //             printf("%d\n",original_num);
    //         }

    //     }
    // number++;


    // }

  
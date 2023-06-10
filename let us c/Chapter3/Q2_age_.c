#include<stdio.h>
int main()
{
    int age_of_Ram,age_of_shyam,age_of_ajay;
    printf("Enter age of Ram Shyam and ajay respectively\n");
    scanf("%d%d%d",&age_of_Ram,&age_of_shyam,&age_of_ajay);
    if(age_of_Ram>age_of_shyam && age_of_Ram> age_of_ajay)
    printf("Age of Ram is greatter %d",age_of_Ram);
    else if(age_of_shyam>age_of_Ram && age_of_shyam>age_of_ajay)
    printf("age of shaym is greater %d",age_of_shyam);
    else if(age_of_ajay>age_of_Ram && age_of_ajay>age_of_shyam)
    printf("age of ajay is greater %d",age_of_ajay);
    else if(age_of_ajay==age_of_Ram && age_of_ajay==age_of_shyam)
    printf("all age is same");
    

    return 0;
}
// temp=temp*10+num%10;
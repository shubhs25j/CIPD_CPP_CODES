#include<stdio.h>
float temperture_of_city_to_centigrade(float Fahrenheit);
int main()
{   float Fahrenheit,centigrade;
    printf("Enter the temperture of city in Fahrenheit\n");
    scanf("%f", &Fahrenheit);
    printf("%f",temperture_of_city_to_centigrade(Fahrenheit));
    return (0);
}
float temperture_of_city_to_centigrade(float Fahrenheit)
{  
   float centigrade= ((Fahrenheit-32)*5)/9; 
    return (centigrade);

}

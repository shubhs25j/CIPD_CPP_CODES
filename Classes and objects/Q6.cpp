#include<iostream>
#include<math.h>
class Interest
{
    float principal;
    float rateOfIntereast;
    float timeSpame;
    float no_of_anual_compound;
    public:
    float simple(float P,float R,float T)
    {
        principal=P;
        rateOfIntereast=R;
        timeSpame=T;
        float simple;
        simple= (P*R*T)/100;
        return simple;
    }
    float complex(float P,float R,float T,float n)
    {
        principal=P;
        rateOfIntereast=R;
        timeSpame=T;
        no_of_anual_compound=n;
        float complex;
        complex=P*pow((1+R/(100*n)),n*T)-P;
        // complex=P*pow((1+R/(100*n)),n*T);

        return complex;
    }
};
int main()
{
    Interest a1;
    std::cout<<a1.simple(100000,8,2)<<"\n";
    Interest *a2=new Interest;
    std::cout<<a2->complex(100000,10,5,1);
    delete a2;

}
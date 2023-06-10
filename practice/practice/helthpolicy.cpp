#include<iostream>
#include<cstring>
class HelthPolicy
{
    double premiun;
    std::string name_of_policy_holder;
    int weiting_period;

    public:
    HelthPolicy()
    {
        premiun=2300;
        name_of_policy_holder="shubham";
        weiting_period=90;
    }
    HelthPolicy(double pr,std::string name,int wp):premiun(pr),name_of_policy_holder(name),weiting_period(wp){}

    void show()
    {
        std::cout<<"name is "<<name_of_policy_holder<<"\n";
        std::cout<<"primium is "<<premiun<<"\n";
        std::cout<<"weighting period"<<weiting_period<<"\n";
    }

    double getPremiun() const { return premiun; }
    void setPremiun(double premiun_) { premiun = premiun_; }

    std::string nameOfPolicyHolder() const { return name_of_policy_holder; }
    void setNameOfPolicyHolder(const std::string &nameOfPolicyHolder) { name_of_policy_holder = nameOfPolicyHolder; }

    int weitingPeriod() const { return weiting_period; }
    void setWeitingPeriod(int weitingPeriod) { weiting_period = weitingPeriod; }
};
void fun()
{
    HelthPolicy h4;
    // h4.show();
   std::cout<<h4.getPremiun()<<"\n";
    std::cout<<h4.nameOfPolicyHolder()<<"\n";
    std::cout<<h4.weitingPeriod()<<"\n";


}
int main()
{
    HelthPolicy h1,h2(2134,"jagadale",30);
    h1.show();
    h2.show();
    HelthPolicy *h3 =new HelthPolicy;
    h3->show();
    delete h3;
    fun();
    

}
#include <iostream>
#include <string>
#include "Health_Policy.h"

int main(){
    H_policy h1;
h1.show();

H_policy h2("ram ",5767876.55,4008.99);
h2.show();

H_policy *h3=new H_policy("krushna",300006.66,3008.99);

h3->show();

H_policy hparr[3]{H_policy("shankar",33434.66,2233.99),H_policy("nikhil",134446.66,3244.99),H_policy("vaishnav",366336.66,9034.99)};
for (H_policy i : hparr)
    {
        i.show();
    }
H_policy *hptr= new H_policy[3]{H_policy("Vasudev ",13334.66,4433.22),H_policy("namrata",33398.66,4334.33),H_policy("rani mukhraji",456336.66,3432.55)};
 for (int i = 0; i < 3; i++)
    {
        hptr[i].show();
    }

  H_policy::printCount();
    
    for (int i = 0; i < 3; i++)
    {
        delete []hptr;
    }

    delete h3;
}
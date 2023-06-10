// Implement  the  class  Vehicle_Policy,  whose  data  members  are  PolicyId,  Vehicle_Name  and Amount.
// Create  default  and  parameterized  constructors,  getters/setter  functions  for  each attribute.
// Implement a menu driven program to performbelow operations –
// 35.aAccept valid data from the user and store it in an array of Vehicle_Policy objects.Display the   stored data.                                                 
// 35.b Sort data in decreasing order of policy amount.
// 35.c Display all the details for the holder with highest and lowest policy amount.
#ifndef VEHICALPOLICY_H
#define VEHICALPOLICY_H

#include<iostream>
#include<cstring>

class Vehical_policy
{
    int policyId;
    std::string vehical_name;
    int amount;
    public:
    Vehical_policy();
    Vehical_policy(int id,std::string name,int amt);
    void display();
    void accept();

    int getPolicyId() const { return policyId; }
    void setPolicyId(int policyId_) { policyId = policyId_; }

    std::string vehicalName() const { return vehical_name; }
    void setVehicalName(const std::string &vehicalName) { vehical_name = vehicalName; }

    int getAmount() const { return amount; }
    void setAmount(int amount_) { amount = amount_; }

};

#endif // VEHICALPOLICY_H

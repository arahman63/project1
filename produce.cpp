#include <iostream>
#include<bits/stdc++.h> 
#include "Produce.hpp"


Produce::Produce(const std::string& in_file)
//member initializers
{
    mFile = in_file;
}
std::string Produce::getName() const{
    return name;
}

double Produce::getWeight()const{
    return weight;
}
double Produce::getPricePerPound()const{
    return price_per_pound;
}

 bool Produce::getOrganic()const{
     return is_organic;
 }
 
 bool Produce::getPrePackaged() const{

     return is_pre_packaged;
 }
 int Produce::getRipeness() const{

     return ripeness;
 }
 int Produce::getCondition() const{

     return condition;
}
std::string Produce::getRipenessStr() const{

    for(int i = 0;i<ripeness;i++){
        tolower(ripeness[i]);
    }
    return ripeness;
}
std::string Produce::getConditionStr() const{
    for(int i = 0;i<condition;i++){
        tolower(condition[i]);
    }
    return condition;
}
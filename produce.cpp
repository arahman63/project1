#include <iostream>
#include<bits/stdc++.h> 
#include "Produce.hpp"


Produce::Produce(const std::string& in_file)
{
   std::ifstream theFile;
   theFile.open(in_file);
   theFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   if(theFile.fail()) std::cerr<<"File not found";
   theFile>>name_>>weight_>>price_per_pound_>>is_organic_>>is_pre_packaged_>>ripeness_>>condition_;
}
std::string Produce::getName() const{
    return name_;
}

double Produce::getWeight()const{
    return weight_;
}
double Produce::getPricePerPound()const{
    return price_per_pound_;
}

 bool Produce::getOrganic()const{
     return is_organic_;
 }
 
 bool Produce::getPrePackaged() const{

     return is_pre_packaged_;
 }
 int Produce::getRipeness() const{

     return ripeness_;
 }
 int Produce::getCondition() const{

     return condition_;
}
std::string Produce::getRipenessStr() const{
    switch(ripeness_){
        case produce_details::OVERRIPE: return "overripe";
        case produce_details::UNDERRIPE: return "underripe";
        case produce_details::RIPE: return "ripe";
    }

   return 0; 
}
std::string Produce::getConditionStr() const{
    switch(condition_){
        case produce_details::DAMAGED: return "damaged";
        case produce_details::UNDAMAGED: return "undamaged";
    }
   return 0;
}
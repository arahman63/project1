#include <iostream>
#include<bits/stdc++.h> 
#include "Produce.hpp"


Produce::Produce(const std::string& in_file)
//member initializers
{
   std::ifstream theFile;
   theFile.open(in_file);
   if(theFile.fail()) std::cerr<<"File not found";
       
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
    switch(ripeness){
        case produce_details::OVERRIPE: return "overripe";
        case produce_details::UNDERRIPE: return "underripe";
        case produce_details::RIPE: return "ripe";
    }
    
}
std::string Produce::getConditionStr() const{
    switch(condition){
        case produce_details::DAMAGED: return "damaged";
        case produce_details::UNDAMAGED: return "undamaged";
    }

}
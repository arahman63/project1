#include <iostream>
#include<bits/stdc++.h> 
#include "Vegetable.hpp"
#include "Produce.hpp"
#include "Fruit.hpp"

namespace solution{
    std::string shouldIBuyThis(Produce * product){
        if(product->getRipenessStr() =="RIPE" && product->getConditionStr()=="UNDAMAGED" || (product->getRipenessStr()=="UNDERRIPE" && product->getConditionStr()=="UNDAMAGED")){
            return "Yes you should buy this" + product->getName() + "because it is " + product->getRipenessStr() + "and" + product->getConditionStr();
        }
        else if(product->getRipenessStr() =="RIPE" && product->getConditionStr()=="DAMAGED" || (product->getRipenessStr()=="UNDERRIPE" && product->getConditionStr()=="DAMAGED")){
            return "It is not the best idea to buy this" + product->getName() + "because it is " + product->getRipenessStr() + "and" + product->getConditionStr();
        }
        else if(product->getRipenessStr() =="OVERRIPE" && product->getConditionStr()=="UNDAMAGED" || (product->getRipenessStr()=="OVERRIPE" && product->getConditionStr()=="DAMAGED")){
             return "No you should not buy this" + product->getName() + "because it is " + product->getRipenessStr() + "and" + product->getConditionStr();
        }
    }
}

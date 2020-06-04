#include<bits/stdc++.h> 
#include "Vegetable.hpp"
#include "Produce.hpp"
#include "Fruit.hpp"

namespace solution{
    std::string shouldIBuyThis(Produce * product){
        std::string productName = product->getName();
        std::string productRipeness = product->getRipenessStr();
        std::string productCondition = product->getConditionStr();
        if(productRipeness =="RIPE" && productCondition=="UNDAMAGED" || (productRipeness=="UNDERRIPE" && productCondition=="UNDAMAGED")){
            return "Yes you should buy this" + productName + "because it is " + productRipeness + "and" + productCondition;
        }
        else if(productRipeness =="RIPE" && productCondition=="DAMAGED" || (productRipeness=="UNDERRIPE" && productCondition=="DAMAGED")){
            return "It is not the best idea to buy this" + productName + "because it is " + productRipeness + "and" + productCondition;
        }
        else if(productRipeness =="OVERRIPE" && productCondition=="UNDAMAGED" || (productRipeness=="OVERRIPE" && productCondition=="DAMAGED")){
             return "No you should not buy this" + productName + "because it is " + productRipeness + "and" + productCondition;
        }
        return "";//remember that a string has to return an empty string, don't "return 0"
    }
}

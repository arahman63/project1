#include <iostream>
#include<bits/stdc++.h> 
#include "Produce.cpp"
#include "Vegetable.cpp"
#include "Fruit.cpp"

int main(){
   const std::string in_file = "test_data/bad_apple_1.txt";
 /*  Produce pr(in_file);
   std::cout<< pr.getName()<<"\n";
   std::cout<< pr.getWeight()<<"\n";
   std::cout<< pr.getPricePerPound()<<"\n";
   std::cout<< pr.getOrganic()<<"\n";
   std::cout<< pr.getPrePackaged()<<"\n";
   std::cout<< pr.getRipeness()<<"\n";
   std::cout<< pr.getCondition()<<"\n";
   std::cout<< pr.getRipenessStr()<<"\n";
   std::cout<< pr.getConditionStr()<<"\n";
*/
   /* FRUIT CLASS CALL */
   Fruit fr(in_file);
   std::cout<<fr.getPitted();
   std::cout<<fr.getPeelableSkin();
   std::cout<<fr.getRind();
   std::cout<<fr.getEdibleSeeds();

   /* VEGETABLE CLASS CALL*/
   Vegetable vg(in_file);
   std::cout<<vg.getVeggieType();
   
}
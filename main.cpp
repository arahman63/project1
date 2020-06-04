#include <iostream>
#include<bits/stdc++.h> 
#include "Produce.cpp"
#include "Vegetable.cpp"
#include "Fruit.cpp"
#include "Solution.cpp"

int main(){
   
   const std::string in_file = "test_data/good_apple_1.txt";
  /* Produce pr(in_file);
   std::cout<<"Produce Name: " <<  pr.getName()<<"\n";
   std::cout<<"Produce Weight: "<< pr.getWeight()<<"\n";
   std::cout<<"Produce price_per_pound: "<< pr.getPricePerPound()<<"\n";
   std::cout<<"Produce, is it Organic: "<< pr.getOrganic()<<"\n";
   std::cout<<"Produce, is it Prepackaged: "<< pr.getPrePackaged()<<"\n";
   std::cout<<"Produce Ripeness: "<< pr.getRipeness()<<"\n";
   std::cout<<"Produce Condition: "<< pr.getCondition()<<"\n";
   std::cout<<"Produce : "<< pr.getRipenessStr()<<"\n";
   std::cout<<"Produce :" <<pr.getConditionStr()<<"\n";
   */

   /*FRUIT CLASS CALL 
   Fruit fr(in_file);
   std::cout<<"Pitted: "<<fr.getPitted()<<"\n";
   std::cout<<"Peelable Skin: "<<fr.getPeelableSkin()<<"\n";
   std::cout<<"The Rind: "<<fr.getRind()<<"\n";
   std::cout<<"Edible Seeds: "<<fr.getEdibleSeeds()<<"\n";
    */

   /*VEGETABLE CLASS CALL
   Vegetable vg(in_file);
   std::cout<<vg.getVeggieType();
   */
  Produce *product = new Fruit(in_file);
  std::cout<<solution::shouldIBuyThis(product)<<"\n";

}
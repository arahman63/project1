#include <iostream>
#include<bits/stdc++.h> 
#include "Fruit.hpp"
#include "Produce.hpp"


Fruit::Fruit(const std::string& in_file)
:Produce(in_file)
{
   std::ifstream theFile;
   theFile.open(in_file);
   theFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   if(theFile.fail()) std::cerr<<"File not found";
   theFile>>is_pitted>>has_peelable_skin>>has_rind>>has_edible_seed;
}
bool Fruit::getPitted(){
    return is_pitted;
}
bool Fruit::getPeelableSkin(){
    return has_peelable_skin;
}
bool Fruit::getRind(){
    return has_rind;
}
bool Fruit::getEdibleSeeds(){
    return has_edible_seed;
}
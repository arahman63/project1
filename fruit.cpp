#include <iostream>
#include<bits/stdc++.h> 
#include "Fruit.hpp"
#include "Produce.hpp"


Fruit::Fruit(const std::string& in_file)
:Produce(in_file) //member initializer is used to initialize data memebers from a class
{
   std::ifstream theFile;
   theFile.open(in_file);
   theFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skips the first line of the txt file
   if(theFile.fail()) std::cerr<<"File not found";
   theFile>>is_pitted_>>has_peelable_skin_>>has_rind_>>has_edible_seed_;
}
bool Fruit::getPitted() const{
    return is_pitted_;
}
bool Fruit::getPeelableSkin() const{
    return has_peelable_skin_;
}
bool Fruit::getRind() const{
    return has_rind_;
}
bool Fruit::getEdibleSeeds() const{
    return has_edible_seed_;
}
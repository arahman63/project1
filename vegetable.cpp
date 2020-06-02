#include <iostream>
#include<bits/stdc++.h> 
#include "Vegetable.hpp"
#include "Produce.hpp"


Vegetable::Vegetable(const std::string& in_file)
:Produce(in_file)
{
   std::ifstream theFile;
   theFile.open(in_file);
   theFile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
   if(theFile.fail()) std::cerr<<"File not found";
   theFile>>veggie_type;
}
std::string Vegetable::getVeggieType(){
    switch(veggie_type){
        case categories::ALLIUM: return "allium";
        case categories::CRUCIFEROUS: return "cruciferous";
        case categories::EDIBLE_STEM: return "edible_stem";
        case categories::LEAFY_GREEN: return "leafy_green";
        case categories::LEGUME: return "legume";
        case categories::MARROW: return "marrow";
        case categories::ROOT: return "root";
    }

   return 0; 

#include<bits/stdc++.h> 
#include "Produce.hpp"

#ifndef VEGETABLE_
#define VEGETABLE_

namespace categories
{
 enum veggie_categories
 {
    ALLIUM = 0,
    CRUCIFEROUS = 1,
    EDIBLE_STEM = 2,
    LEAFY_GREEN = 3,
    LEGUME = 4,
    MARROW = 5,
    ROOT = 6
 };
}

class Vegetable: public Produce{
    public:
     Vegetable(const std::string &in_file);
     std::string getVeggieType();
      
    private:
    int veggie_type;

}; //end Vegetable
#endif
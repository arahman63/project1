#include<bits/stdc++.h> 
#include "Produce.hpp"

#ifndef FRUIT_
#define FRUIT_

class Fruit:public Produce{
    public:
      Fruit(const std::string &in_file);
      bool getPitted();
      bool getPeelableSkin();
      bool getRind();
      bool getEdibleSeeds();
      
    private:
      bool is_pitted;
      bool has_peelable_skin;
      bool has_rind;
      bool has_edible_seed;
}; //end Fruit
#endif
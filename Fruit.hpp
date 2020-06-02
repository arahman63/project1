#include<bits/stdc++.h> 
#include "Produce.hpp"

#ifndef FRUIT_
#define FRUIT_

class Fruit: public Produce{
    public:
      Fruit(const std::string &in_file);
      bool getPitted() const;
      bool getPeelableSkin() const;
      bool getRind() const;
      bool getEdibleSeeds() const;
      
    private:
      bool is_pitted_;// The "_" is a stylistic choice so you know that its a member of a class 
      bool has_peelable_skin_;
      bool has_rind_;
      bool has_edible_seed_;

}; //end Fruit
#endif
#include<bits/stdc++.h> 

#ifndef PRODUCE_
#define PRODUCE_

namespace produce_details
{
    enum ripeness
    {
        OVERRIPE = 0,
        UNDERRIPE = 1,
        RIPE = 2
    };
    enum conditions
    {
        DAMAGED = 0,
        UNDAMAGED = 1
    };
} // namespace produce_details

class Produce
{   
    public:
      Produce(const std::string& in_file);
      std::string getName() const;
      double getWeight() const;
      double getPricePerPound() const;
      bool getOrganic() const;
      bool getPrePackaged() const;
      int getRipeness() const;
      int getCondition() const;
      std::string getRipenessStr() const;
      std::string getConditionStr() const;

    private:
        std::string name;
        double weight;
        double price_per_pound;
        bool is_organic;
        bool is_pre_packaged;
        int ripeness;
        int condition; 
        std::string str;
        
}; // end Produce
#endif
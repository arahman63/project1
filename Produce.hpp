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
      Produce(const std::string& in_file); //@param the Produce constructor takes in a file, which is a constant string
      std::string getName() const;
      double getWeight() const;
      double getPricePerPound() const;
      bool getOrganic() const;
      bool getPrePackaged() const;
      int getRipeness() const;
      int getCondition() const;
      std::string getRipenessStr() const; //takes the strings from  "enum ripeness" and returns it in a lowercase version by using a switch case
      std::string getConditionStr() const;//takes the strings from  "enum ripeness" and returns it in a lowercase version by using a switch case

    private:
        std::string name_;// The "_" is a stylistic choice so you know that its a member of a class 
        double weight_;
        double price_per_pound_;
        bool is_organic_;
        bool is_pre_packaged_;
        int ripeness_;
        int condition_; 
        
}; // end Produce
#endif
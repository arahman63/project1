#include <iostream>
#include<bits/stdc++.h> 
#include "Produce.cpp"
int main(){
   const std::string in_file = "test_data/bad_apple_1.txt";
   Produce pr(in_file);
   pr.getName();
   pr.getWeight();
   pr.getPricePerPound();
   pr.getOrganic();
   pr.getPrePackaged();
   pr.getRipeness();
   pr.getCondition();
   pr.getRipenessStr();
   pr.getConditionStr();
}
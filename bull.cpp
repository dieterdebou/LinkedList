#include "bull.h"
#include <iostream>

Bull::Bull(int weight, int liftCapacity, std::string name){
    this->weight = weight;
    this->liftcapacity = liftCapacity;
    set_name(name);
    
}

void Bull::set_name(std::string name){
    this->name=name; 
}

std::string Bull::to_string(void){
    return "Name: " + name + ", weight: " + std::to_string(weight) + " kg" + ", liftcapacity: " + std::to_string(liftcapacity) + " kg";
}

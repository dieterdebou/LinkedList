#pragma once
#include <string>
#include <iostream>

class Bull{

    public:
        Bull(int weight, int liftCapacity, std::string name);
   
    public:
        void set_name(std::string name);
        std::string to_string(void);

    private:
        int weight;
        int liftcapacity;
        std::string name;

};

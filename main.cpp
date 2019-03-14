#include <iostream>
#include "bull.h"
#include "node.h"
#include <string>

using namespace std;

    void print (Node * node){
        while(node != nullptr){
            cout << node -> get_data() << endl;
            node = node -> get_next();
        }
    }

int main(){
    
    Bull giant(2800, 1800, "GIANT");
    Bull weidemann(3200, 1750, "Weidemann");
    Bull avant(2000, 1300, "Avant");
    cout << giant.to_string() << endl;
    cout << weidemann.to_string() << endl;
    cout << avant.to_string() << endl;

    Node start(0);
    Node second(1);
    Node last(2);

    second.set_next(&last);
    start.set_next(&second);  

    print(&start);  

return 0;
}
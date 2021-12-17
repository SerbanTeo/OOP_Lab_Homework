#include <iostream>
#include<vector>
#include<string>
using namespace std;
class Vehicle {

public:
    string name;
    virtual void start() = 0;
};
class Rocket : public Vehicle {
public:
    Rocket(string name){
        this->name=name;
    }
    void start()
    {
        cout << "start "<<this->name<<" rocket" << endl;
    }
};
class Car : public Vehicle {
public:
    Car(string name){
        this->name=name;
    }
    void start()
    {
        cout << "start "<<this->name<<" car" << endl;
    }
};
int main() {
    vector <Vehicle*>vehicule;
    vehicule.push_back(new Car("red"));
    vehicule.push_back(new Rocket("NASA"));
    for(auto element:vehicule){
        element->start();
    }
}

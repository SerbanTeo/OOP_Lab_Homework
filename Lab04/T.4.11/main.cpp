#include <iostream>
#include <string>
using namespace std;
class Bus{
private:
    string name;
public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    Bus(string name){
        this->name=name;
    }
};
class BusStation{
private:
    int number;
public:
    int getNr(){
        return this->number;
    }
    BusStation(int number){
        this->number=number;
    }
};
class Adress{
private:
    string name;
public:
    void setAdress(string name){
        this->name=name;
    }
    string getAdress(){
        return this->name;
    }
    Adress(string name){
        this->name=name;
    }
};
class Driver {
public:
    string nume;
    Driver() {}
    Driver(string nume) {
        this->nume = nume;
    }
    string getNume() {
        return this->nume;
    }
    void setNume(string nume) {
        this->nume = nume;
    }
};
class Commuter {
public:
    string nume;
    Commuter() {}
   Commuter(string nume) {
        this->nume = nume;
    }
    string getNume() {
        return this->nume;
    }
    void setNume(string nume) {
        this->nume = nume;
    }
};

class Mosquito{
public:
    void nr_of_mosquito(){
        cout<<"there are 10 mosquitos";
    };
};
class Engine{
private:
    int liters;
public:
    void set_liters(int liters){
        this->liters=liters;
    }
    int get_liters(){
        return this->liters;
    }
};

class Car{
private: string owner;
public:
    void set_owner(string owner){
        this->owner=owner;
    }
    string getOwner(){
        return this->owner;
    }
};
int main() {
}


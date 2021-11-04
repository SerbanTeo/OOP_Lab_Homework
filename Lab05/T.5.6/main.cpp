#include <iostream>
#include <string>

using namespace std;

class Mosquito{
protected:
    int counter;
public:
    Mosquito(int counter) {
        this->counter = counter;
    }

    void setCounter(int counter){
        this->counter = counter;
    }

    int getCounter(){
        return this->counter;
    }
};
class Apartment{
protected: Mosquito* mosquito;
    string area;
public:
    Apartment(string area,int counter){
        this->area=area;
        this->mosquito->setCounter(counter);
    }
    void setArea(string area){
        this->area=area;
    }
    string getArea(){
        return this->area;
    }
    void displayInfo(){
        cout<<"Welcome to the apartment"<<endl;
        cout<<"The apartment is located in "<<getArea()<<endl;
        if(mosquito->getCounter() != 0)
            cout<<"There are mosquitos in the aparment "<<endl;
        else
            cout<<"There aren't mosquitos in the apartment "<<endl;
    }
};
class Driver{
protected:
    string name;
    int yearsOfexperience;
public:
    Driver(string name, int yearsOfexperience){
        this->name = name;
        this->yearsOfexperience = yearsOfexperience;
    }

    void setname(string name){
        this->name = name;
    }

    void setyearsOfexperience(int yearsOfexperience){
        this->yearsOfexperience = yearsOfexperience;
    }

    string getname(){
        return this->name;
    }

    int getyearsOfexperience(){
        return this->yearsOfexperience;
    }

    void displayDriverInfo(){
        cout<<"Meet your driver His/Her name is: "<<this->name<<endl;
        cout<<"We care for our customers and we only have experienced drivers, your driver has : "<<this->yearsOfexperience<<" years of experience"<<endl;
    }
};
class Student{
protected:
    int grade;
public:
    Student(int grade){
        this->grade = grade;
    }
    void setgrade(int grade){
        this->grade = grade;
    }

    int getgrade(){
        return this->grade;
    }

    void displayStudentInfo(){
        if(this->grade >5){
            cout<<"this student is promoting this year";
        }
        else{
            cout<<"this student is not going to promote this year";
        }
    }
};
class Commuter{
protected:
    int age;
public:
    Commuter(int age){
        this->age = age;
    }

    void setage(int age){
        this->age = age;
    }

    int getage(){
        return this->age;
    }

    void displayCommuterInfo(){
        if(this->age >60)
            cout<<"This commuter is a elderly person"<<endl;
        else
            cout<<"This commuter is a normal person"<<endl;
    }
};
class Person : public Apartment, public Driver, public Commuter,public Student{
protected:
    Apartment* apartment;
    Driver* driver;
    Commuter* commuter;
    Student* student;
    int age;
    string name;
public:
    Person(string name, int age, string area,int counter, string nameOfDriver, int yearsOfexperience, int ageOfCommuter,int grade): Apartment(area,counter),
                                                                                                                                    Driver(nameOfDriver, yearsOfexperience), Commuter(ageOfCommuter),Student(grade){
        this->name = name;
        this->age = age;
    }

    void displayPersonInfo(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Age : "<<this->age<<endl;
        Apartment :: displayInfo();
        Driver :: displayDriverInfo();
        Commuter :: displayCommuterInfo();
        Student :: displayStudentInfo();
    }
};
class Address{
protected:
    string street;
    int number;
public:
    Address(string street, int number){
        this->street = street;
        this->number = number;
    }

    void setStreet(string street){
        this->street = street;
    }

    void setNumber(int number){
        this->number = number;
    }

    string getStreet(){
        return this->street;
    }

    int getNumber(){
        return this->number;
    }
};
class Bus{
protected:
    string model;
public:
    Bus(string model){
        this->model = model;
    }

    void setModel(string model){
        this->model = model;
    }

    string getModel(){
        return this->model;
    }
};
class BusStation{
protected:
    Address* adresa;
    Bus* autobuz;
    int capacity;
public:
    BusStation(string model, int capacity, string street, int number){
        adresa= new Address(street,number);
        autobuz=new Bus(model);
        this->capacity = capacity;
        this->adresa->setNumber(number);
        this->adresa->setStreet(street);

    }

    void displayBusStationInfo(){
        cout<<"Model autobuz : "<< this->autobuz->getModel()<<endl;
        cout<<"Bus Station Capacity : "<<this->capacity<<endl;
        cout<<"Bus Station Address : "<<endl;
        cout<<"   "<<"Bus Station street name : "<<this->adresa->getStreet()<<endl;
        cout<<"   "<<"Bus Station street number : "<<this->adresa->getNumber()<<endl;
    }
};
class Engine{
protected:
    string liters;
public:
    Engine(string liters){
        this->liters = liters;
    }

    void setliters(string liters){
        this->liters=liters;
    }

    string getliters(){
        return this->liters;
    }
};
class Car{
protected:
    Engine* engine;
    string typecar;
    int year_of_production;
public:
    Car(string typecar,int year_of_production){
        this->typecar = typecar;
        this->year_of_production=year_of_production;
    }

    void displayCarInfo(){
        cout<<"Car type : "<<this->typecar<<endl;
        cout<<"Car's production year : "<<this->year_of_production;
    }

};
int main(){
    Person* person = new Person("Vali",22,"Brazda",10,"Liviu",5,30,10);

    person->displayPersonInfo();

    cout<<endl;

    Car* car= new Car("suv",2010);

    car->displayCarInfo();
    cout<<endl;

    BusStation* busStation = new BusStation("E1",10,"CATARGIU",6);
    busStation->displayBusStationInfo();
    cout<<endl;
}
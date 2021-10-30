#include <iostream>
#include <string>
using namespace std;

class Chef{
private:
    int age;
    string name;
public:


    void set_age(int age){
        this->age=age;
    }
    void set_name(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    int getAge(){
        return this->age;
    }
    Chef(){
    };
    Chef(int age, string name){
        this->age=age;
        this->name=name;
    }
};

class Oven{
public:
    // state=1 is when the oven is on and state=0 when the oven is off
    int state;

    int get_oven_state(){
        return this->state;
    }
    void setOven_state(int state){
        this->state=state;
        if (state==1){
            cout<<"the oven is on";
        }
        else{
            cout<<"the oven is off";
        }
    }

};

class Food{
public:
    int kg;
    string name;
    void setName(string name){
        this->name=name;
    }
    void setKg(int kg){
        this->kg=kg;
    }
    string getName(){
        return this->name;
    }
    int getKg(){
        return this->kg;
    }
    Food(int kg, string name){
        this->kg=kg;
        this->name=name;
    }

};

class Knife{
public:
    int sharpness;

    Knife(){
        this->sharpness=10;
    };
    void sharpen_knife(){
        sharpness+=1;
    }
    int getSharpness(){
        return this->sharpness;
    }
};
int main(){
    int kg;
    string name;
    cout<<"new food just came in enter the amount of food and the type of it"<<endl;
    cin>>kg;
    cin>>name;
    Food * mancare= new Food(kg,name);
    Knife *cutit=new Knife();
    Oven *cuptor= new Oven();
    Chef *bucatar= new Chef(35,"Vlad");
    cout<<"the chef just entered the room, checks out the food and gets on cooking"<<endl;
    cuptor->setOven_state(1);
    while(cutit->getSharpness()<15){
        cutit->sharpen_knife();
    }
    cout<<"the chef just got his knife really sharpned"<<endl;
    cout<<bucatar->getName()<<" cuts everything and puts it into the oven"<<endl;

}
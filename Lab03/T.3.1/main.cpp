#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    int speed;
    string color;
public:
    void setColor(string color){
        this->color =color;
    }

    int getSpeed(){
        return this->speed;
    }
    string getColor(){
        return this->color;
    }
    void accelerate (int acceleration){
        this->speed=acceleration;
        cout<<"You are going at "<< this->speed<<"km/h"<<endl;
    }
    void stop(){
        this->speed=0;
        cout<<"Your car just stopped"<<endl;
    }
    Car(){
        //a car not moving without a defined color
        this->speed=0;
        this->color = "";
    }

};

int main() {
    Car *ford,mustang;
    mustang.setColor("green");
    //pe autostrada
    mustang.accelerate(130);
    cout<<mustang.getColor()<<endl;
    mustang.stop();
    cout<<mustang.getSpeed()<<endl;


    ford= new Car();
    ford->setColor("blue");
    //prin oras
    ford->accelerate(60);
    cout<<ford->getSpeed()<<endl;
    cout<<ford->getColor()<<endl;
    ford->stop();


}

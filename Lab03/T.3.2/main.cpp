#include <iostream>
#include <string>
using namespace std;
class Kitty{
private:
    string name;
    int tuna_eaten;
    string color;
public:
    void setColor(string color){
        this->color=color;
    }
    void setName(string name){
        this->name=name;
    }
    string getColor(){
        return this->color;
    }
    string getName(){
        return this->name;
    }
    void eat(int food){
        this->tuna_eaten +=food;
        cout<<this->name<<" rolls over with a full tummy"<<endl;
    }
    int getFood(){
        return this->tuna_eaten;
    }
    Kitty()
    {
        this->tuna_eaten=0;
        this->name="";
        this->color="";
    }
    Kitty(string name){
        this->tuna_eaten=0;
        this->name=name;
        this->color="";
    }
};
int main() {
    Kitty *cat,cat1;
    cat=new Kitty("Bobita");
    cat->setColor("white");
    cat->eat(2);
    cout<<cat->getName()<<endl;
    cout<<cat->getColor()<<endl;
    cout<<cat->getFood()<<endl;
    cat1.setName("Brownie");
    cat1.setColor("brown");
    cat1.eat(5);
    cat1.eat(2);
    cout<<cat1.getName()<<endl;
    cout<<cat1.getFood()<<endl;
    cout<<cat1.getColor()<<endl;



}

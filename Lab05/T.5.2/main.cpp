#include <iostream>
using namespace std;
class Form {
private:
    string color;
protected:
    string name;
public:
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
protected:
    void setColor(string color){
        this->color = color;
    }

    string getColor(){
        return this->color;
    }
/*private:
    void setColor(string color){
        this->color = color;
    }

    string getColor(){
        return this->color;
    }
    */

};
class Rectangle:public Form {
protected:
    int width;
    int height;
public:
    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
    Rectangle(string color){
        setColor(color);
    }
    string getRectangleColor(){
        return getColor();
    }
};
int main()
{

    Form *f = new Form();
    f->setName("forma1");
    cout<<"forma: "<<f->getName()<<endl;
    Rectangle *r = new Rectangle("brown");
    r->setWidth(23);
    //works for protected but not for private :)
    r->setName("rectangle 1");
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<endl;
    cout<<"rectangle name: "<<r->getRectangleColor()<<" width:"<<r->getWidth()<<endl;
    return 0;

}
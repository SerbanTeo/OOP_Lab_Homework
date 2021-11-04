#include <iostream>
using namespace std;
class Form {
private:
    string color;
protected:
    string name;
    void setColor(string color) {
        this->color = color;
    }
public:
    Form(string name){
        this->name = name;
        cout<<"Form constructor"<<endl;
    }
    string getName(){
        return this->name;
    }
    void setName(string name){
        this->name = name;
    }
    ~Form(){
        cout<<"form destroyed"<<endl;
    }
};
class Rectangle:public Form {
protected:
    int width;
    int height;
public:
    Rectangle(string name, int width, int height) :Form(name){
        this->width = width;
        this->height = height;
        cout<<"Rectangle constructor"<<endl;
    }
    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
    ~Rectangle(){
        cout<<"Rectangle destroyed"<<endl;
    }
};
int main()
{
    Form *f = new Form("forma1");
    cout<<"forma: "<<f->getName()<<endl;
    Rectangle *r = new Rectangle("rectangle 1", 1, 2);
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<endl;
    delete f;
    delete r;
    return 0;
    //we can see the form constructor is called first and then the rectangle 2nd
    //but for destructors first the rectangle then the form
}

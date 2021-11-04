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
    }
    string getName(){
        return this->name;
    }


    void setName(string name){
        this->name = name;

    }
    void showMessage(){
        cout<<"message from Form"<<endl;
    }
    void computeArea(double width,double length){
    cout<< "Form area is: "<<length*width<<endl;
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
    }
    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
    int getHeight(){
        return this->height;
    }
    void showMessage(){
        Form::showMessage(); // operator :: used to call showMessage from base class
        cout<<"message from Rectangle"<<endl;
    }
    void computeArea(){
        cout<<"Area for rectangle is: "<<this->width* this->height<<endl;
    }
    void computeArea(double width,double height){
        cout<<"Area for rectangle is: "<<width * height<<endl;
    }
};
class Square:public Form {
protected:
    int side;
public:
    Square(string name, int side) :Form(name){
        this->side = side;
    }
    void setSide(int side){
        this->side = side;
    }
    int getSide(){
        return this->side;
    }
    void showMessage(){
        cout<<" message from Square"<<endl;
    }
    void computeArea(){
        cout <<"Area for square is: " << this->side* this->side << endl;
    }
    void computeArea(double side){
        cout <<"Area for square is: " << side * side << endl;
    }
};
int main()
{
    Form *f = new Form("forma1");
    cout<<"form: "<<f->getName()<<endl;
    f->showMessage();
    Rectangle *r = new Rectangle("rectangle 1", 1, 2);
    cout<<"rectangle name: "<<r->getName()<<" width:"<<r->getWidth()<<endl;
    r->showMessage();
    Square *s = new Square("square 1", 20);
    cout<<"square name: "<<s->getName()<<" side:"<<s->getSide()<<endl;
    s->showMessage();
    cout<<endl;

    f->computeArea(10,20);

    cout<<endl;
    r->computeArea();

    cout<<endl;
    r->computeArea(r->getWidth(),r->getHeight());

    cout<<endl;
    s->computeArea();

    cout<<endl;
    s->computeArea(s->getSide());
    return 0;
}
#include <iostream>
#include <string>
#include<vector>
#define pi 3.14159265358979323846
using namespace std;
class Shape
{
public:
    virtual float Compute_area()=0;
};
class Circle : public Shape
{
public:
    int raza;
    Circle(int raza){
        this->raza=raza;
    }
    float Compute_area() {
        return this->raza * this->raza * pi;
    }
};
class Rectangle : public Shape
{
public:
    int length,width;
    Rectangle(int length, int width){
        this->length=length;
        this->width=width;
    }
    float Compute_area() {
        return this->length * this->width;
    }
};
class Square : public Shape
{
public:
    int side;
    Square(int side){
        this->side=side;
    }
    float Compute_area() {
        return this->side * this->side;
    }
};
class Vector{
public:
    vector<Shape*>shape_vector;
    void add_shape(Shape* forma)
    {
        shape_vector.push_back(forma);
    }
    float sum_of_areas(){

        float s=0;
        for (auto i : this->shape_vector){

            s = s+ i->Compute_area();
        }
    }
};
int main()
{
    Vector* vector= new Vector();
    vector->add_shape(new Square(4));
    vector->add_shape(new Rectangle(5,4));
    vector->add_shape(new Circle(7));
    cout <<vector->sum_of_areas();
}
/*
 * This can be done without oop by using a vector<pair<pair>>
 * or by using a parameter for each class to identify the type of the shape in order to know what formula to use for the calculation of the area
 */
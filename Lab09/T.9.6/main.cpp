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
class TestingClass
{
public:
    bool is_square_area_valid(double side, double expectedArea)
    {
        Square* patrat = new Square(side);
        if (patrat->Compute_area() == expectedArea)
            return true;
        else
            return false;
    }
};
int main()
{
    TestingClass* test = new TestingClass();
    cout << test->is_square_area_valid(4, 16) << endl;
    cout << test->is_square_area_valid(400, 160000) << endl;
    cout << test->is_square_area_valid(0, 0) << endl;
    cout << test->is_square_area_valid(NULL, NULL) << endl;
    cout << test->is_square_area_valid(-4, NULL) << endl;
}

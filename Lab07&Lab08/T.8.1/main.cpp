#include <iostream>
#include <math.h>
using namespace std;
class ComplexNumber
{
private:
    double imaginaryPart, realPart;
public:
    ComplexNumber(double re, double im)
    {
        this->realPart = re;
        this->imaginaryPart = im;
    }
    double getRealPart()
    {
        return this->realPart;
    }
    double getImaginaryPart()
    {
        return this->imaginaryPart;
    }
    double getModule()
    {
        return sqrt(this->realPart*this->realPart + this->imaginaryPart*this->imaginaryPart);
    }
};
template <class T>
class smallerComplexNumber
{
public:
    T smallerComplexNumber(T nr1, T nr2)
    {
        return nr1->getModule() < nr2->getModule() ? nr1 : nr2;
    }
};
int main() {
    ComplexNumber* nr1, * nr2;
    nr1= new ComplexNumber(20,6);
    nr2= new ComplexNumber(4,8);
    BiggestComplexNumber<ComplexNumber*>* aux= new BiggestComplexNumber<ComplexNumber*>();
    cout<< "ThE CLOSEST NUMBER TO PLAN ORIGIN IS: "<<aux->biggestComplexNumber(nr1,nr2)->getRealPart()<<" + "<<aux->biggestComplexNumber(nr1,nr2)->getImaginaryPart()<<"i";
    return 0;
}

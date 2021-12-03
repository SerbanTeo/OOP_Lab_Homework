#include <iostream>
#include<math.h>
using namespace std;
template<typename T>
class ComplexNumber
{
private:
    double imaginaryPart, realPart;
public:
    ComplexNumber(double real, double imaginary=0)
    {
        this->realPart = real;
        this->imaginaryPart = imaginary;
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
     bool operator >(ComplexNumber complex1) {
      return this->getModule() > complex1.getModule() ? true : false;

    }
    bool operator < (T nr2){
        return this->getModule() < sqrt(nr2*nr2) ? true : false;
    }
};



int main() {
   ComplexNumber<double> nr1(3,2);
   ComplexNumber<double> nr2(5);
   double nr3=10;
   if(nr1>nr2){
       cout<<"nr1 is greater"<<endl;
   }
   else{
       cout<<"nr2 is greater"<<endl;
   }
   if (nr2<nr3){
       cout<<"nr3 is greater"<<endl;
   }
   else{
       cout<<"nr2 is greater"<<endl;
   }
}

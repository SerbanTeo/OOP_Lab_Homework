#include <iostream>
#include <cmath>
using namespace std;
class ComplexNumber {
private:
    int realPart;
    int imaginaryPart;
public:
    ComplexNumber operator ^(int power) {
        ComplexNumber tmp(this->realPart, this->imaginaryPart);
        for(int i = 1; i < power; i++) {

           int realPartTMP  = this->realPart * tmp.getRealPart() - this->imaginaryPart * tmp.getImaginaryPart();
           int imgPart = this->imaginaryPart * tmp.getRealPart() + this->realPart * tmp.getImaginaryPart();
           tmp.setNumber(realPartTMP,imgPart);
        }
        return tmp;
    }

    double operator ~() {
        return sqrt(this->realPart * this->realPart + this->imaginaryPart * this->imaginaryPart);
    }
    ComplexNumber operator +(ComplexNumber complex1) {
        ComplexNumber aux(this->realPart + complex1.getRealPart(), this->imaginaryPart + complex1.getImaginaryPart());
        return aux;
    }
    void setNumber (int realPart = 0, int imaginaryPart = 0) {
        this->realPart = realPart;
        this->imaginaryPart = imaginaryPart;
    }
    int getRealPart() {
        return realPart;
    }
    int getImaginaryPart () {
        return imaginaryPart;
    }
    ComplexNumber(int realPart = 0, int imaginaryPart = 0) {
        this->realPart = realPart;
        this->imaginaryPart = imaginaryPart;
    }
};

int main() {
    ComplexNumber x(1,4), y(3, 6);
    ComplexNumber z = x + y;
    cout <<  z.getRealPart() << " + " << z.getImaginaryPart()<<"i" << endl;
    cout << ~x << endl;
    z = x^2;
    cout <<  z.getRealPart() << "  " << z.getImaginaryPart()<<"i" << endl;
}

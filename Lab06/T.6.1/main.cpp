#include <iostream>
#include <cmath>
using namespace std;
class ComplexNumber {
private:
    int realPart;
    int imaginaryPart;
public:
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
    ComplexNumber(int realPart =0 , int imaginaryPart =0 ) {
        this->realPart = realPart;
        this->imaginaryPart = imaginaryPart;
    }
};

class Operations {
private:
    double doubleNumber=0;
    ComplexNumber complex;
public:
    double module () {
        if (doubleNumber) {
            return abs(doubleNumber);
        } else {
            return sqrt(complex.getImaginaryPart() * complex.getImaginaryPart()+ complex.getRealPart() * complex.getRealPart());
        }
    }
    double module (double number) {
        return abs(number);
    }
    double module (int real, int img) {
        return sqrt(real * real + img * img);
    }
    Operations (double doubleNumber) {
        this->doubleNumber = doubleNumber;
    }
    Operations (int real, int img) {
        ComplexNumber newNumber(real, img);
        this->complex = newNumber;
    }
};

int main() {

    Operations complex(4,3) ,double_a(12345);
    cout <<complex.module()<<endl;
    cout << double_a.module() << endl;

    cout << double_a.module(-65678) << endl;
    cout << double_a.module(3, 4) << endl;

}
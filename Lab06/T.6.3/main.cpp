#include <iostream>
#include <cmath>
using namespace std;
class ComplexNumber {
private:
    int realPart;
    int imaginaryPart;
public:
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

class Operations {
private:
    double doubleNumber = 0;
    ComplexNumber complex;
public:
    template <typename T>
    T sum (T x, T y) {
        return y + x;
    }
    double module () {
        if (doubleNumber) {
            return abs(doubleNumber);
        } else {
            return sqrt(complex.getRealPart() * complex.getRealPart() + complex.getImaginaryPart() * complex.getImaginaryPart());
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
    Operations doubleOperation(66666), complexOperation(3, 4);
    cout << doubleOperation.module() << endl;
    cout << complexOperation.module() << endl;
    cout << doubleOperation.module(-666666) << endl;
    cout << doubleOperation.module(-6, 9) << endl;
    cout << doubleOperation.sum(23, 555) << endl;
    ComplexNumber x(20, 3), y(15, 9);
    cout << doubleOperation.sum(x, y).getRealPart()<<" + "<< doubleOperation.sum(x, y).getImaginaryPart() <<"i";
}
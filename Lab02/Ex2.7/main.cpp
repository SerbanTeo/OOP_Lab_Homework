#include <iostream>
#include<cmath>
using namespace std;
struct nrComplex{
    double real_part,imaginary_part;

}typedef complexNumber;
double module (complexNumber nr){
    return sqrt(nr.real_part * nr.real_part + nr.imaginary_part * nr.imaginary_part);

}
double module (double real_part,double imaginary_part)
{
    return sqrt(real_part * real_part + imaginary_part * imaginary_part);
}
int main() {
    complexNumber nr;
    nr.real_part=2;
    nr.imaginary_part=-4;
    double real_part=4,imaginary_part = 10;
    cout<<module(nr)<<endl;
    cout<<module(real_part,imaginary_part);
}

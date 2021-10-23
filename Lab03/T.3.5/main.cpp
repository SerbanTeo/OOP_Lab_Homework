#include <iostream>
using namespace std;
class ComplexNumber{
private:
    int real_part;
    int imaginary_part;
public:
    void setReal_part(int real_part){
        this->real_part=real_part;
    }
    void setImaginary_part(int imaginary_part){
        this->imaginary_part=imaginary_part;
    }
    int getReal_part(){
        return this->real_part;
    }
    int getImaginary_part(){
        return this->imaginary_part;
    }
    ComplexNumber(){
         this->real_part=0;
         this->imaginary_part=0;
    }

};
ComplexNumber sumfunction(ComplexNumber a, ComplexNumber b)
{
    ComplexNumber x;
    x.setReal_part(a.getReal_part() + b.getReal_part());
    x.setImaginary_part(a.getImaginary_part()+b.getImaginary_part());
    return x;

}
int main() {
    ComplexNumber nr1,nr2,sum;
    nr1.setReal_part(5);
    nr2.setReal_part(1);
    nr1.setImaginary_part(3);
    nr2.setImaginary_part(10);
    cout<<" nr1 is a complex number: "<< nr1.getReal_part() <<" + "<<nr1.getImaginary_part()<<"i"<<endl;
    cout<<" nr2 is a complex number: "<< nr2.getReal_part() <<" + "<<nr2.getImaginary_part()<<"i"<<endl;
    sum= sumfunction(nr1,nr2);
    cout<<" their sum is a complex number: "<< sum.getReal_part() <<" + "<<sum.getImaginary_part()<<"i"<<endl;
}

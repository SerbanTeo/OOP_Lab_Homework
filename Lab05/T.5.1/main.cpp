#include<iostream>
using namespace std;
class A
{
public:
    int aa;
protected:
    int ab;
private:
    int ac;
public:
    void testA(){
// set the attributes in class A
        aa=10;
        ab=12;
        ac=13;
        cout << "testA :"<<endl;
        cout<<"aa= "<<aa<<endl;
        cout<<"aa+ab+ac="<<aa+ab+ac<<endl;
        cout<<"ab= "<<ab<<endl;


    }
};
class B :public A
{
public:
int ba;
protected:
int bb;
private:
int bc;
public:
void testB(){
    ba = 1;
    bb = 4;
    bc = 3;
    aa = aa * 7;
    ab = ab + 7;
    //cannot instantiate ac because its private
    cout<<"aa="<<aa<<endl;
    cout<<"ab="<<ab<<endl;
    cout<<"ba= " <<ba<<endl ;
    cout<<"bb= "<<bb<< endl ;
    cout<<"bc="<<bc<<endl;
    testA();//we can use this because B extends A
}
};
class C: public B
{
public:
int ca;
protected:
int cb;
private:
int cc;
public:
void testC(){
    ca = 1;
    cb = 4;
    cc = 3;
    aa = aa * 7;
    ab = ab + 7;
    ba= ba *7;
    ab= ab+7;
    //cannot instantiate ac because its private
    //cannot instantiate bc because its private
    cout<<"ca= " <<ca<<endl ;
    cout<<"cb= "<<cb<< endl ;
    cout<<"cc="<<cc<<endl;
    testA();//we can use this because B extends A
    testB();//we can use Test A and B because C extends B that extends A
}
};
int main(){
    A a;
    B b;
    C c;
    a.testA();
    cout<<endl;
    b.testB();
    cout<<endl;
    c.testC();
    cout<<endl;
    return 0;}
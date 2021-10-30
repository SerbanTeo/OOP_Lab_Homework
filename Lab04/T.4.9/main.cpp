#include <iostream>
#include <string>
using namespace std;
class A {
    int i;
    string s;
public:
    A(int i1, string s1) : i(i1), s(s1) {}
    int getI() {
        return this->i;
    }
    string getS() {
        return this->s;
    }
};

class B {
    A a;
    string s;
public:
    B(int i2, string s2) : a(i2,s2), s("init value for s in A") {}

    string getS() {
        return this->s;
    }
    A  getA() {
        return this->a;
    }
};


int main()
{
    A *a = new A(23, "a");
    cout << "din A, i:" << a->getI() << " s:" << a->getS() << endl;
    B *b = new B(5, "some string");
    cout << "B s:" << b->getS() << endl;
    cout << "A s:" << b->getA().getI() << " i:" << b->getA().getS() << endl;
    getchar();
    return 0;
    //pseudo constructors represent a easier way to write a constructor
}
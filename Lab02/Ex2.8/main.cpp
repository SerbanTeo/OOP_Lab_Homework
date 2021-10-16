#include <iostream>
#include<string>
#include <typeinfo>
using namespace std;
template <typename T>
T Max(T a, T b ,T c) {
        if (a >= b)
            if (a >= c)
                return a;
            else
                return c;
        else
            if (b >= c)
                return b;
            else
                return c;
}
//struct test{
//    int alt;
//};
int main() {
    int a =10,b = 20, a1=50;
    float c=1.5, d=0.5,b1=0.25;
    string x="a",y="b",z="z";
    cout<<Max(a,b,a1)<<endl;
    cout<<Max(c,d,b1)<<endl;
    cout<<Max(x,y,z)<<endl;

//    test e,f,h;
//    e.alt=10;
//    f.alt=25;
//    h.alt=33;
//    test maxim=Max(e,f,h);
//    cout<<maxim.alt<<endl;
// is not possible to use struct.
}

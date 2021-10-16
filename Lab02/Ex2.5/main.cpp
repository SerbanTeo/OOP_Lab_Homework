#include <iostream>
#include <string>
using namespace std;
struct ABC{
    int a;
};
int f(int x){
    return sizeof(x);
}
int f(double x){
    return sizeof(x);
}
int f(string x){
    return x.length();
}
int f(ABC x){
    return sizeof(x);
}
int main() {
    int test_A=10;
    double test_B=123456789123456789;
    ABC test_C;
    test_C.a=100;
    string test_D= "xxxxxxxx****";
    cout<<f(test_A)<<endl;
    cout<<f(test_B)<<endl;
    cout<<f(test_C)<< endl;
    cout<<f(test_D)<<endl;
}
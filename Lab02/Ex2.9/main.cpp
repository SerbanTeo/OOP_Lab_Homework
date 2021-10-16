#include <iostream>
#include<string>
using namespace std;
template <typename T>
T Max(T a, T b) {
    return a+b;
}
int main() {
    int a=3,b=2;
    cout<< Max(a,b)<<endl;
    string c="a",d="b";
    cout << Max(c,d)<<endl;

    //all the variables are working except chars and structs; Also doesnt work on pointers
}

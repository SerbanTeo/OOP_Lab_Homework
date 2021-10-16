#include <iostream>
using namespace std;
template <typename T>
void interchange (T *a, T *b){
    T alt;
    alt =*a;
    *a=*b;
    *b=alt;
}
struct Student{
    int grade;
};
int main() {
    int a=10,b=29;

    interchange(&a,&b);

    cout<<a<<" "<<b<<endl;

    double a1=3,b1=12;
    interchange(&a1,&b1);
    cout<<a1<<" "<<b1<<endl;

    float a2=1.5, b2=3.7;

    interchange(&a2,&b2);
    cout<<a2<<" "<<b2<<endl;

    string a3="aaa",b3="bbb";
    interchange(&a3,&b3);
    cout<<a3<<" "<<b3<<endl;

    Student Mara, Vlad;
    Mara.grade=10;
    Vlad.grade=8;
    interchange(&Mara,&Vlad);
    cout<<Mara.grade<< " "<<Vlad.grade<<endl;

    //it works for all types



}

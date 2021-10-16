#include <iostream>
#include<string>
using namespace std;
struct CatStruct {
    string name;
    string master;
    int age;
} typedef Cat;

struct PersonStruct {
    string name;
    int age;
} typedef Person;

struct CarStruct {
    string producer;
    string licenseNumber;
    int age;
} typedef Car;
template <typename T>

T min_age (T a, T b) {
    return a.age >= b.age ? b : a;
}
template <typename T, typename U>

bool same_age (T a, U b) {
    return a.age == b.age;
}
int main() {
    Cat Tommy,Nala;
    Car Ford,Toyota;
    Person Teo,Razvana;
    Nala.age=10;
    Tommy.age=3;
    Ford.age=4;
    Toyota.age=18;
    Teo.age=20;
    Razvana.age=18;
    cout<< min_age(Tommy,Nala).age << endl;
    cout<< same_age ( Tommy,Teo)<< endl;
    cout<< same_age (Toyota, Razvana);
    //adressing the comparation of 2 different structs u can but the function doesn't know what to return. i tried with auto still doesn't work
}

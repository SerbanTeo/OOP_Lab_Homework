#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Person{
public:
    int age;
    Person(int age)
    {
        this->age=age;
    }
    int getAge(){
        return this->age;
    }
};
class Car{
public:
    int age;
    Car(int age)
    {
        this->age=age;
    }
    int getAge(){
        return this->age;
    }
};

class AverageList{
public:
    template<typename T>
    static int Average(T list){
        int sum=0;
        for (int i=0;i<list.size();i++){
            sum+=list[i].getAge();
        }
        return sum/list.size();
    }
};
int main() {
    vector<Person> list_of_person;
    vector<Car> list_of_car;
    Person Andrei(10),Costle(20),Vladimir(43),Toto(22);
    list_of_person.push_back(Andrei);
    list_of_person.push_back(Costle);
    list_of_person.push_back(Vladimir);
    list_of_person.push_back(Toto);
    Car Toyota(25),WW(13),BMW(3),Alfa(10);
    list_of_car.push_back(WW);
    list_of_car.push_back(BMW);
    list_of_car.push_back(Toyota);
    list_of_car.push_back(Alfa);

    cout<<"The average of the person list is : "<<AverageList::Average(list_of_person)<<endl;
    cout<<"The average of the car list is : "<<AverageList::Average(list_of_car)<<endl;

}

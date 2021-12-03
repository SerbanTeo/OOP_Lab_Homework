#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Hummer {
public:
    class Wheel{
    public:
        int size_of_wheel;
        int price;
        Wheel(int size_of_wheel,int price){
            this->size_of_wheel=size_of_wheel;
            this->price=price;
        }
    };
    string number;
    vector<Wheel> wheels;
    Hummer(string number){
        this->number=number;
    Wheel wheelaux1(20,350);
    this->wheels.push_back(wheelaux1);

    Wheel wheelaux2(19,350);
    this->wheels.push_back(wheelaux2);

    Wheel wheelaux3(22,350);
    this->wheels.push_back(wheelaux3);

    Wheel wheelaux4(21,350);
    this->wheels.push_back(wheelaux4);
    }
    void removeWheel(int position){
        this->wheels.erase(wheels.begin()+position);
    }
    void swapWheel(int size_wheel){
        for (int i = 0;i<this->wheels.size();i++){
            if (this->wheels[i].size_of_wheel ==size_wheel)
            {
                this->wheels.erase(this->wheels.begin()+i);
                Wheel wheelaux(24,200);
                this->wheels.push_back(wheelaux);
                cout<<"wheel swapped successfully"<<endl;
            }
        }
    }
};
class Carriage {
public:
    class Wheel{
    public:
        int size_of_wheel;
        int price;
        Wheel(int size_of_wheel,int price){
            this->size_of_wheel=size_of_wheel;
            this->price=price;
        }
    };
    string name;
    vector<Wheel> wheels;
    Carriage(string name){
        this->name=name;
        Wheel wheelaux1(20,350);
        this->wheels.push_back(wheelaux1);

        Wheel wheelaux2(19,350);
        this->wheels.push_back(wheelaux2);

        Wheel wheelaux3(22,350);
        this->wheels.push_back(wheelaux3);

        Wheel wheelaux4(21,350);
        this->wheels.push_back(wheelaux4);
    }
    void removeWheel(int position){
        this->wheels.erase(wheels.begin()+position);
        cout<<"wheels for the horses removed"<<endl;
    }
    void swapWheel(int position){
        for (int i = 0;i<this->wheels.size();i++){
            if (this->wheels[i].size_of_wheel ==position)
            {
                this->wheels.erase(this->wheels.begin()+i);
                Wheel wheelaux(24,200);
                this->wheels.push_back(wheelaux);
                cout<<"wheel swapped successfully"<<endl;
            }
        }
    }
};
int main() {
    Hummer suv_smecheros("DJ01BOS");
    Carriage caruta_bengoasa("Limuzina");
    suv_smecheros.removeWheel(1);
    suv_smecheros.swapWheel(20);
    caruta_bengoasa.removeWheel(3);
    caruta_bengoasa.swapWheel(19);

}

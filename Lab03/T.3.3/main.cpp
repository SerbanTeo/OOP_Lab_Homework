#include <iostream>
#include<string>
using namespace std;
class Student {
private:
    string name;
    int grade;
public:
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    void setGrade (int grade) {
        this->grade = grade;
    }
    int getGrade () {
        return this->grade;
    }
    Student () {
        this->grade = 0;
        this->name="";
    };
    Student (string name) {
        this->grade = 0;
        this->name=name;
    };
};

int main() {
    Student student1,*student2;
    student2=new Student("Teo");
    student2->setGrade(10);
    cout<<student2->getGrade()<<" is the highest grade amongst all"<<endl;
    cout<<student2->getName()<<" has it"<<endl;
    student1.setName("Vlad");
    student1.setGrade(9);
    cout<<student1.getName()<<" 2nd best student"<<endl;
    cout<<student1.getGrade()<<" 2nd best grade "<<endl;

}
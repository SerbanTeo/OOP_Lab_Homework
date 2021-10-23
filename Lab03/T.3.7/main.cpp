#include <iostream>
#include<string>
#include<vector>
using namespace std;
class Student{
private:
    int grade;
public:
    static int nr_of_students;
    void setGrade(int grade){
        this->grade=grade;
    }
    int getGrade(){
        return this->grade;
    }
    Student(int grade){
       this->nr_of_students +=1;
       this->grade=grade;
    };
    ~Student(){
        this->nr_of_students -=1;
    };
};
int Student::nr_of_students=0;
int main() {
    cout<<Student::nr_of_students<<endl;
    Student *alex= new Student(3);
    cout<<Student::nr_of_students<<endl;
    delete alex;
    cout<<Student::nr_of_students<<endl;
}

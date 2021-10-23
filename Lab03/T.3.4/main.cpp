#include <iostream>
#include<string>
#include<vector>
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
Student HighestGrade (vector<Student> studentVector) {
    int maxGrade = 0;
    int pos = 0, i=-1;
    for (Student student : studentVector) {
        i++;
        int grade = student.getGrade();
        if (grade >= maxGrade) {
            maxGrade = grade;
            pos = i;
        }
    }
    return studentVector[pos];
}

int main() {
    vector<Student> studVector;
    Student nr1_Student;
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        Student stud;
        string name;
        int grade;
        cout<<"Enter a student's grade:"<<endl;
        cin>>grade;
        stud.setGrade(grade);
        cout<<"Enter a student's name:"<<endl;
        cin>>name;
        stud.setName(name);
        studVector.push_back(stud);

    }
    nr1_Student= HighestGrade(studVector);
    cout<<nr1_Student.getName()<<" has the highest grade: "<<nr1_Student.getGrade() <<endl;
}
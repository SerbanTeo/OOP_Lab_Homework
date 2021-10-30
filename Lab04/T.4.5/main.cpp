#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include<vector>
using namespace std;
class Student{
private: int grade;
        string name;
public:
    void setGrade(int grade){
        this->grade=grade;
    }
        void setName(string name){
        this->name=name;
    };
    int getGrade(){
        return this->grade;
    }
    string getName(){
        return this->name;
    }
};
class studentList {
public:
    vector<Student> list;
    void sortList (string cerinta) {
        if (cerinta == "name") {
            sort(list.begin(), list.end() , [](Student stud1, Student stud2)
            {
                return stud1.getName() < stud2.getName();
            });
        } else if (cerinta == "grade") {
            sort(list.begin(), list.end() , [](Student stud1, Student stud2)
            {
                return stud1.getGrade() < stud2.getGrade();
            });
        }
    }
};


int main() {
    studentList listuta;
    int size = 3;
    for ( int i = 0; i < size; i++) {
        string name;
        int grade;
        cout << "Name: ";
        cin >> name;
        cout << "grade: ";
        cin >> grade;
        Student s;
        s.setName(name);
        s.setGrade(grade);
        listuta.list.push_back(s);
    }
    for ( Student s : listuta.list) {
        cout << "student: name:" << s.getName() << " grade:" << s.getGrade() << endl;
    }
    cout<< endl;
    listuta.sortList("grade");
    for ( Student s : listuta.list) {
        cout << "student: name:" << s.getName() << " grade:" << s.getGrade() << endl;
    }
    cout<< endl;
    listuta.sortList("name");
    for ( Student s : listuta.list) {
        cout << "student: name:" << s.getName() << " grade:" << s.getGrade() << endl;
    }
    cout<< endl;
}


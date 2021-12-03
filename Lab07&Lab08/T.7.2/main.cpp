#include <iostream>
#include<string>
#include <vector>
using namespace std;
class Group{
public:
    class Student{
    public:
        string name;
        Student(string name){
            this->name = name;

        }
    };
    vector<Student> StudentGroup;
    void addStudent(string name)
    {   Student student(name);
        this->StudentGroup.push_back(student);
    }
    void DisplayStudents(){
        for (int i=0;i<this->StudentGroup.size();i++){
            cout << StudentGroup[i].name << " ";
        }

    }
    static void DisplayGroups(vector<Group>Group_of_students ){
        for (int i=0; i<Group_of_students.size();i++){
            cout<<"Students from group " << i+1 <<" :"<<endl;
            Group_of_students[i].DisplayStudents();
            cout<<endl;
        }
    }

};
int main() {
    vector<Group> groupvector;
    Group group1;
    group1.addStudent("andrei");
    group1.addStudent("vlad");
    groupvector.push_back(group1);
    Group group2;
    group2.addStudent("andrei");
    group2.addStudent("vlad");
    group2.addStudent("alex");
    group2.addStudent("viorel");
    group2.addStudent("miai");
    groupvector.push_back(group2);
    Group::DisplayGroups(groupvector);
}

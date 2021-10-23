#include <iostream>
#include<string>
#include<list>
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
    int n;

    list<Student*>list_of_student;
    cout<<"how many students?";
    cin>>n;
    for (int i=0;i<n;i++)
    {   int grade;
        Student *alex;
        cin >> grade;
        alex=new Student(grade);
        list_of_student.push_back(alex);
    }
    for (std::list<Student*>::iterator it=list_of_student.begin();it!=list_of_student.end();++it)
    {   Student *temp=*it;
        cout<<temp->getGrade()<<endl;
    }
    cout<<"from what grade do you want to start from";
    cin>>n;
    for (std::list<Student*>::iterator it=list_of_student.begin();it!=list_of_student.end();++it){
        Student *temp=*it;
        int b =temp->getGrade();
        if(b==n){
            while(it != list_of_student.end()){
                Student *xy= *it;
                int xy_grade=xy->getGrade();
                cout<< xy->getGrade()<<endl;
                it++;
            }
            break;

        }
    }
    for (std::list<Student*>::iterator it=list_of_student.begin();it!=list_of_student.end();++it)
    {
        Student *temp=*it;
        int grade =temp->getGrade();
        if(grade == n){
            break;
        }
        cout<< grade<<endl;
    }
}

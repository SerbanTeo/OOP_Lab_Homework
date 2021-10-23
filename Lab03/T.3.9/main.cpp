#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Course {
public:
    string courseName;
    string teacherName;
};

class Student {
private:
    string firstName;
    string lastName;
    string groupe;
    vector<Course> list_of_courses;
public:
    void setLastName(string lastname){
        this->lastName=lastname;
    }
    void setFirstName(string firstname){
        this->firstName=firstname;
    }
    string getFirstName () {
        return this->firstName;
    }
    string getLastName () {
        return this->lastName;
    }
    vector<Course> getCourseList () {
        return this->list_of_courses;
    }
    string getGroupe () {
        return this->groupe;
    }
    void setGroupe (string groupe) {
        this->groupe = groupe;
    }
    Student (string firstName, string lastName, string groupe, vector<Course> &list_of_courses) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->groupe = groupe;
        this->list_of_courses = list_of_courses;
    }
    Student () {
        this->firstName = "";
    }
};

void createListStudents ( vector<Student> &list_of_students) {
    int n;
    cout << "How many students would you like to have? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        Student *temp;
        string firstName, lastName, groupe;

        cout << "Enter First Name: ";
        cin >> firstName;
        cout << "Enter Last Name: ";
        cin >> lastName;
        cout << "Enter Groupe: ";
        cin >> groupe;

        cout << "How many courses does he attend to? ";
        int x;
        cin >> x;
        vector<Course> list_of_courses;
        for (int j = 0; j < x; j++) {
            string courseName, teacherName;
            cout << "Course Name: ";
            cin >> courseName;
            cout << "Teacher Name: ";
            cin >> teacherName;
            Course tempCourse;
            tempCourse.courseName = courseName;
            tempCourse.teacherName = teacherName;
            list_of_courses.push_back(tempCourse);
        }
        temp = new Student(firstName, lastName, groupe, list_of_courses);
        list_of_students.push_back(*temp);
    }
}
void deleteStudent ( vector<Student> &list_of_students) {
    string firstName, lastName;
    cout << "Which student do you want to delete? Tell me his firstName ";
    cin >> firstName;
    cout << "Now tell me his last name";
    cin >> lastName;

    for (auto i = 0; i < list_of_students.size(); ++i) {
        if (list_of_students[i].getFirstName() == firstName && list_of_students[i].getLastName() == lastName) {
            list_of_students.erase(list_of_students.begin() + i);
            break;
        }
    }
}
Student* searchStudent (vector<Student> &list_of_students) {
    string firstName, lastName;
    cout << "Which student do you want to delete? Enter first name";
    cin >> firstName;
    cout << "Enter last name";
    cin >> lastName;
    for (auto i=0; i < list_of_students.size() ; i++) {
        if ( list_of_students[i].getFirstName() == firstName && list_of_students[i].getLastName() == lastName) {
            return &list_of_students[i];
        }
    }
    Student *a;
    a = new Student;
    return a;
}
void editStudent ( vector<Student> &list_of_students) {
    string firstName, lastName;
    cout << "Which student do you want to edit? Tell me his firstName ";
    cin >> firstName;
    cout << "Now tell me his last name";
    cin >> lastName;
    for (auto & list_of_student : list_of_students) {
        if ( list_of_student.getFirstName() == firstName && list_of_student.getLastName() == lastName) {
            string groupe,lastName,firstName;
            cout << "What is his new groupe?";
            cin >> groupe;
            list_of_student.setGroupe(groupe);
            cout << "What is his new firstname?";
            cin>> firstName;
            list_of_student.setFirstName(firstName);
            cout << "What is his new lastname?";
            cin>>lastName;
            list_of_student.setLastName(lastName);

            break;
        }
    }
}
int main () {
    vector<Student> list_of_students;
    int i;
    do{
    cout << "Choose what you want to do:" << endl;
    cout << "1.Create a list of students." << endl;
    cout << "2.Delete a student." << endl;
    cout << "3.Edit a student." << endl;
    cout << "4.Search for a student by name" << endl;
    cout << "0.Leave program" << endl;
    cin >> i;

        switch (i) {
            case 1:
                createListStudents(list_of_students);
                break;
            case 2:
                deleteStudent(list_of_students);
                break;
            case 3:
                editStudent(list_of_students);
                break;
            case 4:
                Student *selected;
                selected  = searchStudent(list_of_students);
                cout << selected->getFirstName() << " " << selected->getLastName() << " " << selected->getGroupe();
                break;
        }

    }while(i);
}
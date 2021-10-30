#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person {
private:
    int age;
    string name;
public:
    void setAge (int age) {
        this->age = age;
    }
    void setName (string name) {
        this->name = name;
    }
    void displayAge () {
        cout << this->age;
    }
    void displayName () {
        cout << this->name;
    }
    string getName () {
        return this->name;
    }
    void add_age () {
        this->age++;
    }
};

class GroupOfFriends {
private:
    string name;
    vector<Person> friends;
public:
    void setName (string name) {
        this->name = name;
    }
    void displayGroupPersons () {
        cout << endl << "Your group of friends " << this->name << " is composed of:" << endl;
        for (Person tmp : this->friends) {
            cout << "Name: ";
            tmp.displayName();
            cout << " Age: ";
            tmp.displayAge();
            cout << endl;
        }
    }
    void addFriend () {
        string name;
        int age;
        Person newFriend;
        cout << "It seems like you might have a new friend. What's his new name? " << endl;
        cin >> name;
        cout << "Did it age well? How old is he?" << endl;
        cin >> age;
        newFriend.setAge(age);
        newFriend.setName(name);
        this->friends.push_back(newFriend);
    }
    void updateFriend () {
        string name;
        cout << "Tell me the his name ";
        cin >> name;
        cout << "It's " << name << "'s birthday. He is is now ";
        for (Person tmp : this->friends) {
            if (tmp.getName() == name) {
                tmp.add_age();
                tmp.displayAge();
            }
        }
        cout << endl;
    }
    void removeFriend () {
        string name;
        cout << "Tell me his name";
        cin >> name;
        int aux;
        cout << name << "He left your group";
        for (int i = 0; i <= this->friends.size(); i++) {
            if (this->friends[i].getName() == name) {
                aux = i;
            }
        }
        this->friends.erase (this->friends.begin() + aux);
    }
    GroupOfFriends (string name, vector<Person> friends) {
        cout << "New group here";
        this->name = name;
        for ( Person fnd : friends) {
            this->friends.push_back(fnd);
        }
    }
};

int main() {
    int size;
    string name;
    vector<Person> friends;
    cout << "Group name: ";
    cin >> name;
    cout << "Size of initial group: ";
    cin >> size;

    for ( int i = 0; i < size; i++) {
        Person tmp;
        int age;
        string personName;
        cout << "name: ";
        cin >> personName;
        tmp.setName (personName);
        cout << "age: ";
        cin >> age;
        tmp.setAge(age);
        friends.push_back(tmp);
    }

    GroupOfFriends group(name, friends);
    group.displayGroupPersons();
    group.addFriend();
    group.displayGroupPersons();
    group.updateFriend();
    group.displayGroupPersons();
    group.removeFriend();
    group.displayGroupPersons();
}

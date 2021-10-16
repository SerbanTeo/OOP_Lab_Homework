#include <iostream>
using namespace std;
struct Student{
    int nota;
};
Student Max(Student a, Student b) {
    return a.nota < b.nota ? b : a;
}

int main() {
    Student Luca, Ion,maxnota;
    Luca.nota=10;
    Ion.nota=7;
    maxnota=Max(Luca, Ion);
    cout << maxnota.nota;
}

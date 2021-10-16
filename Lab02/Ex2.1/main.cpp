#include <iostream>
using namespace std;

void swap_Using_Refference(int &m, int &n){
    int temp= m;
    m=n;
    n=temp;
}
void swap_Using_Address(int *m, int *n){
    int temp= *m;
    *m=*n;
    *n=temp;
}
int main() {
    int a=5,b=7;
    //swap_Using_Address(&a,&b);
    swap_Using_Refference(a,b);
    cout<<a<<" "<<b;

}

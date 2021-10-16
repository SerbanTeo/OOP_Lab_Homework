#include <iostream>
#include <string>
using namespace std;
int substraction(int a,int b){
    return a-b;
}
int addition(int a,int b){
    return a+b;
};
int main() {
    int a,c;
    string b;
    cin>>a>>b>>c;
    if(b=="+")
        cout<< addition(a,c)<<endl;
    else
        if(b=="-")
            cout<<substraction(a,c);
    return 0;
}

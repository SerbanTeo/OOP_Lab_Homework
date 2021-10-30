#include <iostream>
#include <string>
using namespace std;

class Documents{
private:
    string permis;
    string asigurare;
    string certificat;
public:

    
    void setpermis(string a){
        this->permis = a;
    }

    void setasigurare(string b){
        this->asigurare = b;
    }

    void setcertificat(string c){
        this->certificat = c;
    }

    string getpermis(){
        return permis;
    };
    string getasigurare(){
        return asigurare;
    };
    string getcertificat(){
        return certificat;
    };
	Documents(string a, string b, string c){
        this->permis = a;
        this->asigurare = b;
        this->certificat = c;
    }
};

int main() {
    Documents *doc = new Documents("Serban Teodor-Gabriel","City Insurance faliment","Certificat_Cupra");
    cout<<"Can i see the permit?"<<endl;
    cout<<doc->getpermis()<<endl;
    cout<<"Can i see the insurance?"<<endl;
    cout<<doc->getasigurare()<<endl;
    cout<<"Can i see the cars document?"<<endl;
    cout<<doc->getcertificat();
    return 0;
}
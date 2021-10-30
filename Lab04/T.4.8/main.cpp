#include <iostream>
#include <string>
using namespace std;
class Sofer {
public:
    string nume;
    Sofer(string nume) {
        this->nume = nume;
    }
    string getNume() {
        return this->nume;
    }
    void setNume(string nume) {
        this->nume = nume;
    }
};
class Masina {
public:
    int virsta;
    Sofer* sofer;
    Masina(int virsta, string numeSofer) {
        this->virsta = virsta;
        this->sofer = new Sofer(numeSofer);
    }
    int getVirsta() {
        return this->virsta;
    }
    Sofer* getSofer() {
        return this->sofer;
    }
    //the function
    void exchangeDrivers(Masina* m1,Masina* m2 )
    {
        Sofer* temp = new Sofer(m1->getSofer()->getNume());
        m1->sofer = m2->getSofer();
        m2->sofer = temp;
    }
};
int main() {
    Masina *m1=new Masina(52, "Relu");
    Masina* m2 = new Masina(43, "Vlaicu");
    cout << "virsta masinii: " << m1->getVirsta() << endl;
    cout << "nume sofer: " << m1->getSofer()->getNume() << endl;
    cout << endl;
    cout << "virsta masinii: " << m2->getVirsta() << endl;
    cout << "nume sofer: " << m2->getSofer()->getNume() << endl;
    cout << endl << "We exchange drivers between cars.\n";
    m1->exchangeDrivers(m1, m2);
    cout << "virsta masinii: " << m1->getVirsta() << endl;
    cout << "nume sofer: " << m1->getSofer()->getNume() << endl;
    cout << endl;
    cout << "virsta masinii: " << m2->getVirsta() << endl;
    cout << "nume sofer: " << m2->getSofer()->getNume() << endl;

    return 0;
}
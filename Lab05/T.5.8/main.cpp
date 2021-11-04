#include <iostream>
#include <string>

using namespace std;

class Mechanism{
protected:
    string name;
    string serial;
public:
    Mechanism(string name, string serial){
        this->name = name;
        this->serial = serial;
    }

    void setName(string name){
        this->name = name;
    }

    void setSerial(string serial){
        this->serial = serial;
    }


    string getName(){
        return this->name;
    }

    string getSerial(){
        return this->serial;
    }
};
class ComputingMachine{
protected:
    int Diskspace;
    string processorName;
public:
    ComputingMachine(int Diskspace, string processorName){
        this->Diskspace = Diskspace;
        this->processorName = processorName;
    }

    void setDiskspace(int Diskspace){
        this->Diskspace = Diskspace;
    }

    void setProcessorName(string processorname){
        this->processorName = processorname;
    }

    int getDiskspace(){
        return this->Diskspace;
    }

    string getProcessorName(){
        return this->processorName;
    }
};

class Computer : public ComputingMachine{
protected:
    string source;
    int butons;
public:
    Computer(string source, int butons, int Diskspace, string processorName) : ComputingMachine(Diskspace,processorName){
        this->source=source;
        this->butons=butons;
    }
    void setSource(string source){
        this->source=source;
    }
    void setButons(int butons){
        this->source=source;
    }
    string getSource(){
        return this->source;
    }
    int getButons(){
        return this->butons;
    }

};
class Robot : public Mechanism, public Computer{
protected:
    string name;
public:
    Robot(string name,string mechanismName,string serial,string source, int butons, int Diskspace, string processorName): Mechanism(mechanismName,serial),Computer(source,butons,Diskspace,processorName){
        this->name = name;
    }
    void Display(){
        cout<<this->name<<endl;
        cout<<"seria mecanismului : "<<Mechanism::getSerial()<<endl;
        cout<<"the processor is : "<<Computer::getProcessorName()<<endl;
        cout<<"the Diskspace is : "<<Computer::getDiskspace()<<endl;
        cout<<"the number of butons is : "<<Computer::getButons()<<endl;

    }
};
int main()
{
    Robot *robot = new Robot("Eva","IRONMAN","AAACE3DVB","Bronze",10,10000,"QUADCOREINTELPENTIUM2000");
         robot->Display();

}
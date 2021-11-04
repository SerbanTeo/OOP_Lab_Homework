//
// Created by gabte on 11/3/2021.
//
#include<string>
using namespace std;
#ifndef T_5_3_FORM_H
#define T_5_3_FORM_H
class Form {
private:
    string color;
protected:
    string name;

public:
    string getName() {
        return this->name;
    }

    void setName(string name) {
        this->name = name;
    }

void setColor(string color) {
        this->color = color;
    }

    string getColor() {
        return this->color;
    }
};
#endif //T_5_3_FORM_H

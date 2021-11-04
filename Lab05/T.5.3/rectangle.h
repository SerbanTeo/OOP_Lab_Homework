//
// Created by gabte on 11/3/2021.
//

#ifndef T_5_3_RECTANGLE_H
#define T_5_3_RECTANGLE_H
#include "form.h"
class Rectangle:public Form {
protected:
    int height;
    int width;
public:
    void setWidth(int width){
        this->width = width;
    }
    int getWidth(){
        return this->width;
    }
};
#endif //T_5_3_RECTANGLE_H

#include <iostream>
#include <string>
#include "rectangle.h"
#include "form.h"

using namespace std;


int main()
{
    Form *f = new Form();
    f->setName("forma1");
    f->setColor("Blue");
    cout<<"forma : "<<f->getName()<<endl;
    cout<<"culoarea : "<<f->getColor()<<endl;

    Rectangle *r = new Rectangle();
    r->setWidth(23);
    r->setName("rectangle 1");
    cout<<"rectangle name : "<<r->getName()<<endl<<"width : "<<r->getWidth()<<endl;
    return 0;
}
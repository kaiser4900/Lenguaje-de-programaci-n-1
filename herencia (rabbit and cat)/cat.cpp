#include "cat.h"

cat::cat(int _age, string _name):Animal(_age, _name)
{

}
cat::~cat()
{

}
void cat::speak()
{
    cout<<"miau!!"<<endl;
}

ostream & operator <<(ostream & os, const cat & a)
{
    os<< "Cat: "<<a.name<<" - "<<a.age;
    return os;
}
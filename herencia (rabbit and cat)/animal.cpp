#include "animal.h"

Animal::Animal(int _age, string _name)
{
    age = _age;
    name = _name;
}

Animal::~Animal()
{

}

ostream & operator <<(ostream & os, const Animal & a)
{
    os<< "Animal: "<<a.name<<" - "<<a.age;
    return os;
}

void Animal::set_age(int _age)
{
    age =_age;
}
void Animal::set_name(string _name)
{
    name =_name;
}

int Animal::get_age()
{
    return age;
}
string Animal::get_name()
{
    return name;
}
void Animal::speak()
{
    cout<<"Animaaaaal"<<endl;
}
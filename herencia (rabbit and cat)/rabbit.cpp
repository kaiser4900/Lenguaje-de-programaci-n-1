#include "rabbit.h"

int rabbit::n_rabbits = 0;

rabbit::rabbit(int _age, string _name, rabbit * _parent1, rabbit * _parent2 ):Animal(_age, _name)
{
    parent1 = _parent1;
    parent2 = _parent2;
    id = ++ n_rabbits;

}
rabbit::~rabbit()
{
}
void rabbit::speak()
{
    cout<<"cuicui!!"<<endl;
}

 int rabbit::get_number_rabbits()
 {
     return n_rabbits;
 }

rabbit * rabbit::get_parent1()
{
    return parent1;
}

rabbit * rabbit::get_parent2()
{
    return parent2;
}

int rabbit::get_id()
{
    return id;
}




rabbit rabbit::operator +( rabbit & a)
{
    rabbit c(0,"new_rabbit", this, &a);
    return c;
}

bool rabbit::operator ==( rabbit & a)
{
    bool parents_same = (parent1->id == a.parent1->id && parent2->id == a.parent2->id );

    return parents_same; 
}

ostream & operator <<(ostream & os, const rabbit & a)
{
    os<< "Rabbit: "<<a.name<<" - age: "<<a.age<< " - id: "<<a.id ;
    if (a.parent1 != nullptr)
       os<<" Parent1: " << *a.parent1<<" - ";
    if (a.parent2 != nullptr)
        os<<" Parent2: " << *a.parent2<<endl;
    return os;
}

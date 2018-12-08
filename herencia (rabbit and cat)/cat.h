#ifndef CAT_H
#define CAT_H

#include "animal.h"

class cat: public Animal
{
    public:
        cat(int _age, string _name);
        ~cat();
        void speak();
        friend ostream & operator <<(ostream & os, const cat & a);
};

#endif

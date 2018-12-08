#ifndef RABBIT_H
#define RABBIT_H

#include "animal.h"

class rabbit: public Animal
{
    private:
        rabbit *parent1;
        rabbit *parent2;
        int id;
        static int n_rabbits;
    public:
        rabbit(int _age, string _name, rabbit * _parent1 = nullptr, rabbit * _parent2 = nullptr);
        ~rabbit();

        static int get_number_rabbits();
        void speak();

        rabbit * get_parent1();
        rabbit * get_parent2();
        int get_id();

        rabbit operator +( rabbit & a);
        bool operator ==( rabbit & a);

        friend ostream & operator <<(ostream & os, const rabbit & a);
};

#endif

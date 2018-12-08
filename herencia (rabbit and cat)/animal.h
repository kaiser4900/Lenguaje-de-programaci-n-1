#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
#include<iostream>

using namespace std;

class Animal
{
    protected:
        int age;
        string name;

    public:
        Animal( int _age=0, string _name="none");
        ~Animal();
        
        void set_age(int _age);
        void set_name(string _name);

        int get_age();
        string get_name();

        virtual void speak();

        friend ostream & operator <<(ostream & os, const Animal & a);

};
#endif











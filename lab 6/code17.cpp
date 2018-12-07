#include <iostream>

using namespace std;

class Link
{
public:
    string value;
    Link(const string& v,Link* p=0,Link* s=0)
        :value(v),prev(p),succ(s){}
    Link* insert(Link* n);
    Link* erase();
    Link* find(const string& s);
    const Link* find(const string& s)const;
    Link* next() const{return succ;}
    Link* previous() const{return prev;}
    void imprimir();
private:
    Link* prev;
    Link* succ;
};

Link* Link::insert(Link* n)
{
    if(n==0)return this;
    if(this==0)return n;
    n->succ=this;
    if(this ->prev) this->prev->succ=n;
    n->prev=this->prev;
    this->prev=n;
    return n;
}
void Link::imprimir()
{
Link*o=this;
while (o)
{
cout<<o->value<<" ";
o=o->succ;
}
}
int main()
{
    Link* p = new Link("Hola");
    Link* q = new Link("juan");
    Link* r = new Link(":v");
    q=q->insert(p);
    q=q->insert(r);
    q->imprimir();
}

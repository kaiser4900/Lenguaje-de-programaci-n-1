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
const Link* Link::find(const string& s) const {
    const Link* p = this;
    while (p) {
        if (p->value==s) cout<<"\nencontre: "<<s;
        p = p->succ;
    }
    return 0;
}

Link* Link::find(const string& s) {
    Link* p = this;
    while (p) {
        if (p->value==s) cout<<"\nencontre: "<<s;
        p = p->succ;
    }
    return 0;
}
Link* Link::erase() {
    if (this==0) return 0;
    if (succ) succ->prev = prev;
    if (prev) prev->succ = succ;
    return succ;
}
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
    Link* t = new Link("Hola");
    Link* q = new Link("juan");
    Link* r = new Link(":v");
    q=q->insert(t);
    q=q->insert(r);
    q->imprimir();
    q->find(":v");
}

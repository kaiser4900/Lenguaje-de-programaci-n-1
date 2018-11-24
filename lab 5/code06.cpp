#include <iostream>

using namespace std;

enum Month {

    jan = 1, feb, mar, apr, may, jun, jul, aug, sep,
    oct, nuv, dcm
};
enum Day {
    monday, tuesday, wednesday, thursday, friday, saturday
};

void error(const char* errmsg)
{
    cerr<<errmsg<<endl;
}
Month int_to_month(int x)
{
    if(x<jan || dcm<x) error("mes invalido");
    return Month(x);
}
void f(int m)
{
    Month mm=int_to_month(m)
}

int main()
try
{
    Month m=feb;
    int n=m;
    Month mm= Month(7);
    f(4);
    f(99);
}
catch(exception& e){
    cerr<<"error: "<<e.what()<<"\n";
    return 1;
}

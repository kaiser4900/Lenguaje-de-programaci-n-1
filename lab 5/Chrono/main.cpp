#include <iostream>

using namespace std;

int main()
try
{
    Chrono:: Date holiday(1978, Chrono::Date::jul,4);
    Chrono::Date d2= Chrono:: next_Sunday(holiday);
    Chrono:: Day d= day_of_week(d2);

    cout<<"Feriado es "<<holiday<<
    " d2 es "<<d2<<endl;
    return holiday != d2;
}

catch (Chrono::Date::Invalid&){
    cerr<<"error: Fecha invalida\n";
    return 1
}

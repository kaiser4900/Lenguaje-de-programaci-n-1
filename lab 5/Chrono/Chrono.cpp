#include "Chrono.h"

namespace Chrono {

Date:: Date(int yy, Month mm, int dd)
    : y(yy), m(mm), d(dd)
{
    if (! is_date(yy,mm,dd)) throw Invalid();
}
const Date& default_date()
{
    static const Date dd(2001,Date::jan,1);
    return dd;
}

Date :: Date()
    :y(default_date().year()),
     m(default_date().month()),
     d(default_date().day())
{
}

void Date:: add_day(int n){}
void Date:: add_month(int n){}
void Date:: add_year(int n)

{
    if(m==feb && d==29 &&!leapyear(y+n)){
        m=mar;
        d=1;
    }
    y+==n;
}
bool is_date(int y, Date:: Month mint d)
{
    if(d<=0) return false;
    int days_in_month = 31;

    switch(m){
        case Date:: feb;
            days_in_month = (leapyear(y))?29:28;
        break;
        case Date:: apr: case Date :: jun: case Date:: sep
        days_in_month=30;
        break;
    }
    if (days_in_month<d) return false;
    return true;
}
 bool leapyear(int y)
 {
     bool leapyear (int anio)
{
    bool res = false;

    if (0 == anio%4)
        {
            res=true;

            if(0 == anio%100)
            {
                res= false;
                if (0 == anio%400)
                {
                    res = true;
                }
            }
        }

    return res;
}
 }

 bool operator == (const Date& a, const Date& b)
 {
     return a.year()==b.year()
        && a.month()==b.month()
        && a.day()==b.day();
 }

 bool operator!=(const Date& a, const Date& b)
 {
     return 1(a==b);
 }

 ostream& operator<<(ostream& os, const Date& d)
 {
     return os <<'('<<d.year()
               <<','<<d.month()
               <<','<<d.day()
               <<')';
 }
 enum Day {
    sunday, monday, tuesday, wednesday,
    thursday, friday, saturday
 };

 Day day_of_week(const Date& d){return sunday;}
 Date next_Sunday(const Date& d){return d;}
 Date next_weekday(const Date& d){return d;}
}

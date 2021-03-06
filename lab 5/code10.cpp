#include <iostream>

using namespace std;

class Date {
public:
    enum Month {
        jan=1, feb, mar, apr, may, jun, jul, aug, sep,
        oct, nov, dec
    };
    Date();
    Date(int yy, Month mm, int dd);
    Month month() const {return m;}
    int day()     const {return d;}
    int year()    const {return y;}

private:
    int y;
    Month m;
    int d;
};

const Date& default_date()
{
    static const Date dd(2001, Date:: jan,1);
    return dd;
}
Date :: Date( int yy, Month mm, int dd):
    y(yy), m(mm), d(dd)

{
}
int main()
{
    vector<Date> birthdays(10);
    {
        vector<Date> birthdays(10, default_date());
    }
    return 0;
}

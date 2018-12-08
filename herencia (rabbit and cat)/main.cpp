#include "cat.h"
#include "rabbit.h"

int main()
{ //	cat gato(5,"Garfield");
//	cout<<gato<<endl;
    rabbit r1(23, "dad");
    rabbit r2(20, "mom");
    

    rabbit r3 = r1+r2;
    rabbit r4 = r1+r2;
    cout<<r3<<endl;
    cout<<r4<<endl;

    rabbit r5(5, "other");

    cout<<r5<<endl;

    cout<<"The number of rabbits is: "<<rabbit::get_number_rabbits()<<endl;
    cout<< "The rabbits r3 and r4 the same parents? "<< (r3 == r4) <<endl;
   cout<< "The rabbits r3 and r5 the same parents? "<< (r3 == r5) <<endl;

    r3.speak();
    return 0;
}

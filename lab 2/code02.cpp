#include<iostream>

using namespace std;

int main(){
	
double d=2.5;
int i=2;
double d2=d/i;//d2==1.25inti2=d/i;//i2==1
d2=d/i;//d2==1.25i2=d/i;//i2==1
{double dc;
cin>>dc;
double df=9/5*dc+32;//Cuidado!
}
{double dc;
cin>>dc;
double df=9.0/5*dc+32;//Mejor
} 
return 0;
}


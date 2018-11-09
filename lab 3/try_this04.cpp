#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
try
{


	int a=0,b=0,c=0;

	double resultado1=0,resultado2=0;
	cout<<"Ingresa \"A\" y \"B\"y \"C\": ";cin>>a>>b>>c;

	if((pow(b,2)-(4*(a*c)))>=0){

	resultado1=(-b+(sqrt(pow(b,2)-(4*(a*c)))))/(2*a);
	resultado2=(-b-(sqrt(pow(b,2)-(4*(a*c)))))/(2*a);
	cout<<"Sus resultados pueden ser "<<resultado1<<" o "<<resultado2;

	}
	else
        throw runtime_error("No podemos tener raiz de un negativo");

}
    catch (exception &e){
    cerr<<"Error: "<<e.what()<<endl;
    return 0;
    }


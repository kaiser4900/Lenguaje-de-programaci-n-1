#include<iostream>

using namespace std;

int main(){
	
	
	int age=0, res=0, resul1=0, resul2=0, resul3=0;
	cout<<"Ingrese la edad: ";
	cin>>age;
	
	resul1 = age/365; 
	res=resul1*365;
	age=age-res;
	resul2=age/30; res=resul2*30;
	age=age-res;
	resul3=age/1;
	cout<<resul1<<" ano (s)\n";
	cout<<resul2<<" mes (es)\n";
	cout<<resul3<<" dia (s)";
	
	
	return 0;
}

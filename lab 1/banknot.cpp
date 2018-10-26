#include<iostream>
using namespace std;

int main(){
	
	double num;
	int resul1,resul2,resul3,resul4,resul5,resul6,resul7,resul8,resul9,resul10,resul11,resul12;
	
	cout<<"Ingrese el numero: ";cin>>num;
	
	if(num>=0 and num<=1000000){
	
	resul1=num/100;num=num-(100*resul1);
	resul2=num/50;num=num-(50*resul2);
	resul3=num/20;num=num-(20*resul3);
	resul4=num/10;num=num-(10*resul4);
	resul5=num/5;num=num-(5*resul5);
	resul6=num/2;num=num-(2*resul6);
	resul7=num/1;num=num-(1*resul7);
	resul8=num/0.50;num=num-(0.50*resul8);
	resul9=num/0.25;num=num-(0.25*resul9);
	resul10=num/0.10;num=num-(0.10*resul10);
	resul11=num/0.05;num=num-(0.05*resul11);
	resul12=num/0.01;num=num-(0.01*resul12);
	
	cout<<"BILLETES:"<<endl;
	cout<<resul1<<" billete (s) de $ 100.00"<<endl; 
	cout<<resul2<<" billete (s) de $ 50.00"<<endl;
	cout<<resul3<<" billete (s) de $ 20.00"<<endl; 
	cout<<resul4<<" billete (s) de $ 10.00"<<endl; 
	cout<<resul5<<" billete (s) de $ 5.00"<<endl; 
	cout<<resul6<<" billete (s) de $ 2.00"<<endl; 
	cout<<"MONEDAS:"<<endl;
	cout<<resul7<<" moneda (s) de $ 1.00"<<endl;
	cout<<resul8<<" moneda (s) de $ 0.50"<<endl;
	cout<<resul9<<" moneda (s) de $ 0.25"<<endl; 
	cout<<resul10<<" moneda (s) de $ 0.10"<<endl; 
	cout<<resul11<<" moneda (s) de $ 0.05"<<endl;
	cout<<resul12<<" moneda (s) de $ 0.01"<<endl;
	
		
	}
	else
		cout<<"El numero no se encuentra en el intervalo de 0 a 1000000";
	
	
	return 0;
}

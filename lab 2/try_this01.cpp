#include<iostream>
#include<string>


using namespace std;


int main(){
	
	cout<<"EUR \t Euros\nUSD \t Dolares\nJPY \t Yen\nGBP \t libra\n"; 
	cout<<"ingrese la cantidad y el tipo de moneda (EUR JPY USD GBP)\n";
	double num;
	string tip;	
	cin>>num;
	cin>>tip;
	
	
	
	if (tip=="EUR"){
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		double usd = 1.16932, jpy = 132.16, gbp = 0.89122;
		if (tip=="EUR"){
			cout<<num;
	}
		else if (tip=="USD"){
			num*=usd;
			cout<<num;
	}
		else if (tip=="JPY"){
			num*=jpy;
			cout<<num;
	}
		else if (tip=="GBP"){
			num*=gbp;
			cout<<num;
	}
		else{
			cout<<"No comprendo tu tipo de moneda";
	}
	}
	else if (tip=="USD"){
		
		double jpy = 113.01, eur = 0.85509, gbp = 0.76214;
		
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		
		if (tip=="EUR"){
			num*=eur;
			cout<<num;
	}
		else if (tip=="USD"){
			cout<<num;
	}
		else if (tip=="JPY"){
			num*=jpy;
			cout<<num;
	}
		else if (tip=="GBP"){
			num*=gbp;
			cout<<num;
	}
		else{
			cout<<"No comprendo tu tipo de moneda";
	}
	}
	else if (tip=="JPY"){
		
		double usd = 0.00885, eur = 0.00757, gbp = 0.00674;
		
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		
		if (tip=="EUR"){
			num*=eur;
			cout<<num;
	}
		else if (tip=="USD"){
			num*=usd;
			cout<<num;
	}
		else if (tip=="JPY"){
			cout<<num;
	}
		else if (tip=="GBP"){
			num*=gbp;
			cout<<num;
	}
		else{
			cout<<"No comprendo tu tipo de moneda";
	}
	}
	else if (tip=="GBP"){
		
		double usd = 1.31189, jpy = 148.27, eur = 1.12182;
		
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		
		if (tip=="EUR"){
			num*=eur;
			cout<<num;
	}
		else if (tip=="USD"){
			num*=usd;
			cout<<num;
	}
		else if (tip=="JPY"){
			num*=jpy;
			cout<<num;
	}
		else if (tip=="GBP"){
			cout<<num;
	}
		else{
			cout<<"No comprendo tu tipo de moneda";
	}
	}
	else{
		cout<<"Usted no ha ingresado un tipo de moneda valida";
	}
	return 0;
}

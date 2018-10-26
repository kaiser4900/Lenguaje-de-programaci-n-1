#include<iostream>



using namespace std;


int main(){
	double usd = 0, jpy = 0, eur = 0, gbp = 0, c = 0, l = 0;
	
	cout<<"E \t Euros\nU \t Dolares\nJ \t Yen\nG \t Libra\nC \t Yuan\nL \t Shekel\n"; 
	cout<<"ingrese la cantidad y el tipo de moneda (E J U G C L)\n";
	double num;
	char tip;	
	cin>>num;
	cin>>tip;
	
	switch(tip){
	
	case 'E':
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		usd = 1.16932, jpy = 132.16, gbp = 0.89122, c = 7.98, l = 4.23;
		switch(tip){
		case'E':
			cout<<num;
			break;
	
		case'U':
			num*=usd;
			cout<<num;
			break;
		case'J':
			num*=jpy;
			cout<<num;
			break;
		case'G':
			num*=gbp;
			cout<<num;
			break;
		case'C':
			num*=c;
			cout<<num;
			break;
		case'L':
			num*=l;
			cout<<num;
			break;
		default:
			cout<<"No comprendo tu tipo de moneda";
			break;
		}
	break;
	case 'U':
		
		jpy = 113.01, eur = 0.85509, gbp = 0.76214, c = 6.87, l = 3.64;
		
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		switch(tip){
		
		case'E':
			num*=eur;
			cout<<num;
			break;
		case'U':
			cout<<num;
			break;
		case'J':
			num*=jpy;
			cout<<num;
			break;
		case'G':
			num*=gbp;
			cout<<num;
			break;
		case'C':
			num*=c;
			cout<<num;
			break;
		case'L':
			num*=l;
			cout<<num;
			break;
		default:
			cout<<"No comprendo tu tipo de moneda";
			break;
		}
	break;
	case'J':
		
		usd = 0.00885, eur = 0.00757, gbp = 0.00674, c = 0.060, l = 0.032;
		
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		
		switch(tip){
		
		case'E':
			num*=eur;
			cout<<num;
			break;
		case'U':
			num*=usd;
			cout<<num;
			break;
		case'J':
			cout<<num;
			break;
		case'G':
			num*=gbp;
			cout<<num;
			break;
		case'C':
			num*=c;
			cout<<num;
			break;
		case'L':
			num*=l;
			cout<<num;
			break;
		default:
			cout<<"No comprendo tu tipo de moneda";
			break;
		}
	break;
	case'G':
		
		usd = 1.31189, jpy = 148.27, eur = 1.12182, c = 8.94, l = 4.74;
		
		cout<<"Ahora ingrese el tipo de moneda que desea: "; cin>>tip;
		switch(tip){
		
		case'E':
			num*=eur;
			cout<<num;
			break;
		case'U':
			num*=usd;
			cout<<num;
			break;
		case'J':
			num*=jpy;
			cout<<num;
			break;
		case'G':
			cout<<num;
			break;
		case'C':
			num*=c;
			cout<<num;
			break;
		case'L':
			num*=l;
			cout<<num;
			break;
		default:
			cout<<"No comprendo tu tipo de moneda";
			break;
		}
	break;
	
	default:
		cout<<"Usted no ha ingresado un tipo de moneda valida\n";
		break;
	}
	return 0;
}

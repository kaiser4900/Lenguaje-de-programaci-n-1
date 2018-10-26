#include<iostream>

using namespace std;


int main(){
	
	int num1,num2,num3;
	
	cout<<"Ingrese los numero que desea ordenar\n";
	cout<<"Numero 1: ";cin>>num1;
	cout<<"Numero 2: ";cin>>num2;
	cout<<"Numero 3: ";cin>>num3;
	
	if(num1>num2 and num1>num3){
		cout<<num1<<" ";
		if(num2>num3){
			cout<<num2<<" "<<num3;
		}
		else
			cout<<num3<<" "<<num2;
	}
	else if(num2>num1 and num2>num3){
		cout<<num2<<" ";
		if(num1>num3){
			cout<<num1<<" "<<num3;
		}
		else
			cout<<num3<<" "<<num1;
	}
	else if(num3>num1 and num3>num2){
		cout<<num3<<" ";
		if(num1>num2){
			cout<<num1<<" "<<num2;
		}
		else
			cout<<num2<<" "<<num1;
	}
	else
		cout<<"\nusted a ingresado caracteres de igual valor "<<endl;
	
	return 0;
}

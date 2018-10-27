#include<iostream>
using namespace std;

int main(){
	double num1=0,num2=0, res=0;
	string a="a";
	while(a!="#"){
		cin>>num1;
		cin>>num2;
		res=num1-num2;
		if (num1>num2)
			cout<<num1<<" es mayor que "<<num2<<endl;
			if(res>= 0.1/100){
			
			cout<<"Los numeros son casi iguales\n";
			}
		else if (num2>num1)
			cout<<num2<<" es mayor que "<<num1<<endl;
			
			res*=-1;
			if(res>= 0.1/100){
			
			cout<<"Los numeros son casi iguales\n";
			}
		else if(num1==num2) {
			cout<<num2<<" es igual a "<<num1<<endl;
			}
		
		
		cout<<"ingresa algun valor para seguir (# para salir): ";
		cin>>a;
	}
return 0;
}

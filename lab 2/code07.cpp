#include<iostream>
using namespace std;

int main(){
	
	cout<<"Por favor ingrese un digito\n";
	char a;
	cin>>a;
	
	switch(a){
		case '0':case '2':case'4':case'6':case'8':
			cout<< "es par\n";
			break;
		default:
			cout<<"no es un digito\n";
			break;
	}
	return 0;
}

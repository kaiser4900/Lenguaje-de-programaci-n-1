#include<iostream>

using namespace std;

int main(){
	
	unsigned long long  arroz=1;
	
	
	for(int cuadro =1;cuadro<=64;++cuadro){
		
		
		
		cout<<"En "<<cuadro<<" cuadros tenemos "<<arroz<<" arroz(s)\n";
		arroz*=2;
	}
	
	return 0;
}

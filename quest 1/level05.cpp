#include<iostream>

using namespace std;

int main(){
	
	string a;
	int mayor=100;
	int menor=1;
	int mid=0; 
	mid=(mayor+menor)/2;
	
	cout<<"Piense en un numero entero del 1-99 intentaremos adivinarlo :)\n";
	
	for(int i=0; i<7;++i){
		cout<<"Tu numero es mayor o igual a "<<mid<<endl;
		cin>>a;
		if (a=="si"){
			menor=(mayor+menor)/2;
			mid=(mayor+menor)/2;
		}
		else if(a=="no"){
			mayor=(mayor+menor)/2;
			mid=(mayor+menor)/2;
		}	
	}
	mayor-=1;
	if(mayor==0){
		cout<<"\nAlgo no esta bien";
	}
	else
		cout<<"tu numero es: "<<mayor;
	return 0;
}

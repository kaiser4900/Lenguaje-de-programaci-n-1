#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<string>name;
	vector<string>nums;
	
	name.push_back("cero");
	name.push_back("uno");
	name.push_back("dos");
	name.push_back("tres");
	name.push_back("cuatro");
	name.push_back("cinco");
	name.push_back("seis");
	name.push_back("siete");
	name.push_back("ocho");
	name.push_back("nueve");
	
	nums.push_back("0");
	nums.push_back("1");
	nums.push_back("2");
	nums.push_back("3");
	nums.push_back("4");
	nums.push_back("5");
	nums.push_back("6");
	nums.push_back("7");
	nums.push_back("8");
	nums.push_back("9");
	
	string num_a,num_b;
	int num1,num2;
	cout<<"ingresa tus numeros: ";cin>>num_a;cin>>num_b;
	
	for(int a=0;a<10;++a){
	
		if(num_a==name[a]){
			num1=a;	
		}
	}
	for(int a=0;a<10;++a){
	
		if(num_a==nums[a]){
			num1=a;	
		}
	}
	for(int a=0;a<10;++a){
	
		if(num_b==name[a]){
			num2=a;	
		}
	}
	for(int a=0;a<10;++a){
	
		if(num_b==nums[a]){
			num2=a;	
		}
	}
	string op;
	int total=0;
	cout<<"ingrese su operador: ";
	cin>>op;
	
	if(op=="+")
		total=num1+num2;
	
	else if (op=="-")
		total=num1-num2;
	
	else if(op=="*")
		total=num1*num2;
	else if(op=="/")
		total=num1/num2;
	else 
		cout<<"Usted no a ingresado un operador valido";
	cout<<"Su resultado es: "<<total;
	return 0;
}

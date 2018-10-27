#include<iostream>
#include<stdlib.h>
#include<string>
#include<vector>

using namespace std;

vector<double>nums;
vector<string>valors;
vector<double>retor;

int main(){
	double num1=0,num2=0,a=0,sum=0,aux=0;
	int o=0,i=0;
	string z="a",uni,aux1;
	while(z!="#"){
		
		cout<<"Ingrese el numero y su unidad\n";
		cin>>num1;
		cin>>uni;
		
		if (uni=="in"){
			retor.push_back(num1);
			num1*=0.0254;
			nums.push_back(num1);
			valors.push_back(uni);
		}
		else if(uni=="cm"){
			retor.push_back(num1);
			num1*=0.01;
			nums.push_back(num1);
			valors.push_back(uni);
		}
		else if (uni =="ft"){
			retor.push_back(num1);
			num1*=0.3048;
			nums.push_back(num1);
			valors.push_back(uni);
		}
		else if(uni=="m"){
			retor.push_back(num1);
			nums.push_back(num1);
			valors.push_back(uni);
		}
		else{
			cout<<"no conozco ese tipo de unidad\n";}
		
		sum+=num1;	
		
		for(int i=0; i<nums.size();++i){
			for(int x=i+1;x<nums.size();x++){
        		if(nums[i]>nums[x]){
        			
            		aux=nums[i];
            		nums[i]=nums[x];
            		nums[x]=aux;
            		
            		aux1=valors[i];
            		valors[i]=valors[x];
            		valors[x]=aux1;
            		
            		aux=retor[i];
            		retor[i]=retor[x];
            		retor[x]=aux;
       			}
    		}
		}
		
		for(int i=0;i<nums.size();++i){
		
			cout<<retor[i]<<" "<<valors[i]<<"\t";
			
		}
		cout<<"\n";
		
		cout<<"\nEl menor es: "<<retor[0]<<" "<<valors[0]<<" y el mayor es: "<<retor[nums.size()-1]<<" "<<valors[nums.size()-1]<<endl;
		cout<<"\nLa suma es: "<<sum<<" m\n";
		cout<<"\nIngrese algun valor para continuar o # para salir: ";
		cin>>z;
		system("cls");
	}
	return 0;
}

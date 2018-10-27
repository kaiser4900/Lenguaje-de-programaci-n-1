#include<iostream>
#include<cstdio>

using namespace std;


int main(){
	
	float a=4.00,b=4.50,c=5.00,d=2.00,e=1.50,total=0,op=0,cant=0;
	
	cin>>op;cin>>cant;
	if(op==1){
	
		total=cant*a;
		printf("Total: R $ %.2f\n",total);
		}
	else if(op==2){
		total=cant*b;
		printf("Total: R $ %.2f\n",total);
	}
	else if(op==3){
		total=cant*c;
		printf("Total: R $ %.2f\n",total);
	}
	else if(op==4){
		total=cant*d;
		printf("Total: R $ %.2f\n",total);
	}
	else if(op==5){
		total=cant*e;
		printf("Total: R $ %.2f\n",total);
	}
	
	
	
	
	
	return 0;
}

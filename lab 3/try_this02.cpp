#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void primo(int cant,vector<int>primos){
	int a=0;
	primos.push_back(2);
	for (int i=2;i<=cant;i++){
		for (int j=0;j<primos.size();j++){
			if (i%primos[j]==0)
				a=a+1;
			if(a>1)
			break;
		}
		if (a<1){
		primos.push_back(i);}
		a=0;
	}
	for(int i=0;i<primos.size();i++){
	cout<<"\t"<<primos[i]<<" \n ";}}

int main() {
	vector<int> primos;
    int cant=100;
	primo(cant,primos);
	return 0;

}

#include<iostream>
using namespace std;

void print_square(int v){
	cout<<v<<"\t"<<v*v<<"\n";
}

int main(){
	for(int i=0; i<100;i++)print_square(i);
}

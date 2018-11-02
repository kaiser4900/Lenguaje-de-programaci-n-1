#include<iostream>

using namespace std;

int area(int length, int width);

int main(){
	int s1 = area(7,8);
	
	int s3 = area(7,8);
	
	return area (4,4); 
}

int area(int length, int width){
	return length*width;
}

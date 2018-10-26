#include <iostream>


using namespace std;


int main () {
	
	int a = 2000;
	char c = a;
	int b = c;
	
	if (a == b)
		cout << "tenemos caracteres gigantes" << endl;
	else
		cout << a << " es diferente de " << b;
		
	
	return 0;
}

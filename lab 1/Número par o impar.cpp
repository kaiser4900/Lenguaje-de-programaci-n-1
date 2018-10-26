#include <iostream>


using namespace std;


int main () {
	
	int num1, num2;
	
	cout << "ingresa un numero: "; cin >> num1;
	num2 = num1% 2;
	if (num2 == 0)
		cout << "\nEl numero " << num1 << " es par \n";
	else
		cout << "El numero " << num1 << " es impar \n";
	
	

	return 0;
}

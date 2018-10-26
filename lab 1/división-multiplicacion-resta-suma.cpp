#include <iostream>


using namespace std;


int main () {
	
	int num1, num2, resultado = 0;
	
	cout << "ingresa un numero: "; cin >> num1;
	cout << "ingresa el siguiente numero: "; cin >> num2;
	
	resultado = num1 / num2;
	cout << "El numero " << num1 << " entre " << num2 << " es igual a " << resultado << endl;
	resultado = 0;
	resultado = num1 + num2;
	cout << "El resultado de la suma entre " << num1 << " y " << num2 << " es " << resultado << endl;
	resultado = 0;
	resultado = num1-num2;
	cout << "La resta de " << num1 << " y " << num2 << " es " << resultado << endl;
	resultado = 0;
	resultado = num1 * num2;
	cout << "El resultado de la multiplicacion de " << num1 << " y " << num2 << " es " << resultado << endl;
	
	if (num1 <num2)
		cout << num2 << " es mayor de " << num1 << endl;
	else if (num1> num2)
		cout << num1 << " es mayor que " << num2 << endl;
	else
		cout << "usted a ingresado valores equivalentes \ n";
	
	
	return 0;
}

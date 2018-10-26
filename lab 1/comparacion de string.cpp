#include <iostream>
#include <math.h>

using namespace std;


int main () {
	
	
	string name,name2;
	cout << "ingrese su primer nombre: "; cin >> name;
	cout << "ingrese el sugundo nombre: "; cin >> name2;
	
	cout << "aqui se muestra la concadenacion " << name + name2;
	if (name> name2) cout << "\nEl primer nombre nombre es mayor";
	if (name2> name) cout << "\nEl segundo nombre es mayor";
	
	
	
	
	return 0;
}

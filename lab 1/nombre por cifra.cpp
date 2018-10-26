#include <iostream>
#include <cctype>

using namespace std;

int main()
{
string name;

	cout<<"ingresa el nombre del número: ";cin>>name;

    for(int i = 0; i < name.length(); i++)
         name[i] = toupper(name[i]);
    
   if(name=="CERO")
   	cout<<"0";
   else if(name=="UNO")
   	cout<<"1";
   	else if(name=="DOS")
   	cout<<"2";
   	else if(name=="TRES")
   	cout<<"3";
   	else if(name=="CUATRO")
   	cout<<"4";
   	else
   		cout<<"No es un numero que conozco"<<endl;
   	
	
   
   	
    return 0;
}

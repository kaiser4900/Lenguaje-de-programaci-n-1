#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <ctype.h>

using namespace std;


int main(){
	
	string despedidan="Me despido de ti con un muy fuerte abrazo",despedidaf="Sin mas que decir me despido de usted",name,saludo1 = "Reciba un cordial saludo de mi parte estimado ", saludo2 ="Me alegro mucho de poder volver a comunicarme contigo ",carta_final,destinatario,cuerpof=" le escribo la presente para hacerle conocer que las labores en la universidad La Salle ya se han retomado con la regularidad del caso",cuerpon=" te escribo para decirte que ya he regresado a clases en la universidad de La Salle y me siento muy feliz";
	int formal,genero;
	
	
	cout<<"BIENVENIDO AL ASISTENTE DE FORMATO DE CARTA\n";
	cout<<"Por favor ingrese su nombre para tener un trato personalizado: "; cin>>name;
	system("cls");
	cout<<"Hola "<<name<<" es un placer ayudarte; esperamos este software sea de tu agrado\n";
	cout<<"ingresa (1) si tu destinatario es mujer y (2) si es varon: "; cin>>genero;
	
	if(genero==1){
		
		saludo1 ="Reciba un cordial saludo de mi parte estimada ";
		
		
	}
	
	
	cout<<"Por favor "<<name<<" ingresa el nombre de la persona a la que va dirijida tu carta: "; cin>>destinatario;
	system("cls");
	cout<<name<<" comenzaremos la carta saludando al destinatario; nos gustaria saber si tu carta es formal(1) o si no lo es(2)\n";
	cout<<"Favor de ingresar cualquier de las dos opciones encerradas en (): "; cin>>formal;
	system("cls");



	if (formal==1){
		
		cout<<name<<" has elegido el saludo formal\n Su saludo comenzara de la siguiente forma "<<"\""<<saludo1<<"\""<<endl;carta_final=saludo1+destinatario;
		cout<<"Su carta esta quedando de la siguiente forma: "<<"\""<<carta_final<<"\""<<endl;
		cout<<("Precione una tecla para continuar"); getch();
		system("cls");
		cout<<name<<" ahora procederemos a poner el cuerpo\n";cout<<"Su carta esta quedando de la siguiente forma: "<<"\""<<carta_final<<cuerpof<<"\""<<endl;
		cout<<("Precione una tecla para continuar"); getch();
		system("cls");
		cout<<name<<" ya casi hemos terminado solamente nos falta despedirnos lo que haremos de una vez\n";
		cout<<"Su carta culmino de la siguiente forma:\n "<<carta_final<<endl<<cuerpof<<endl<<despedidaf<<endl;	
	}
		
		
		
	if (formal ==2){
		
		cout<<name<<" has elegido el saludo no formal\n Su saludo comenzara de la siguiente forma "<<"\""<<saludo2<<"\""<<endl; carta_final=saludo2+destinatario;
		cout<<"Su carta esta quedando de la siguiente forma: "<<"\""<<carta_final<<"\""<<endl;
		cout<<("Precione una tecla para continuar"); getch();
		system("cls");
		cout<<name<<" procederemos a poner el cuerpo\n";cout<<"Su carta esta quedando de la siguiente forma:\n "<<"\""<<carta_final<<endl<<cuerpon<<"\""<<endl;
		cout<<("Precione una tecla para continuar"); getch();
		system("cls");
	cout<<name<<" ya casi hemos terminado solamente nos falta despedirnos lo que haremos de una vez\n";
		cout<<"Su carta culmino de la siguiente forma: \n"<<carta_final<<endl<<cuerpon<<endl<<despedidan<<endl;	
	}
	
	cout<<("Precione una tecla para continuar"); getch();
	system("cls");
	
	cout<<name<<" nos despedimos de ti esperando haberte ayudado no te olvides de saludarnos a "<<destinatario<<" de nuestra parte adios\n";
	
	
	return 0;
}

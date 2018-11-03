#include <iostream>
#include<stdexcept>
#include<vector>
#include<time.h>
#include<stdlib.h>

using namespace std;

int dificultad(string a){

    if(a == "normal"){
        return 4;
    }
    else if(a == "facil"){
        return 2;
    }
    else if(a=="dificil"){
        return 6;
    }
    else
        throw runtime_error("Ingreso incorrecto");

}
int randint(int min,int max){
    int a;

    srand(time(NULL));

		a = min + rand() % ((max+min)-min);
		return a;
}
int randint(int max){return randint(0,max);}



int jugar()

{
    string otra =" ";


    string a;
    cout<<"Seleccione la dificultad (dificil normal facil): ";
    cin>>a;
    vector<int>incognita;
    for(int i=0; i<dificultad(a);++i)
        if(i==0){incognita.push_back(randint(1,9));}
        else{
            incognita.push_back(randint(9));}


    int toro=0;

    cout<<"Acabamos de crear el numero que usted va a adivinar por favor haga su primer intento: ";

    for(int intentos=1;toro!=dificultad(a);++intentos){

    int vaca=0,toro=0;

    vector<int>numero;
    int num;
    int divisor;
    cin>>num;

    if (dificultad(a)==2){
        divisor=10;
    }
    else if (dificultad(a)==4){
        divisor=1000;
    }
    else if(dificultad(a)==6){
        divisor=100000;
    }

    if(num>divisor and num< (divisor*10)){

        for(int t=0;t<dificultad(a);++t){

            int digito=0;
            digito = num/divisor;
            numero.push_back(digito);
            num-=digito*divisor;
            divisor/=10;

            if(divisor==0)
                divisor=1;
    }

    }
     else
            throw runtime_error("Usted no ha ingresado un numero con corde a su dificultad");

    for(int i=0; i<numero.size();++i){
		for(int o=0;o<incognita.size();++o){
			if(numero[i]==incognita[o]){
                if(i==o){
                    toro++;
                }
                else if (i!=o)
                    vaca++;

				}
			else{
			}

		}
	}

    if(toro==dificultad(a)){
        cout<<"Felicidades has ganado con "<<intentos<<" intento(s)\n";
        jugar();

        }

    else{
        cout<<"Usted tiene "<<toro<<" toros y "<<vaca<<" vacas \n";
        cout<<"Realizo "<<intentos<<" intento(s)\n";
    }



    }

    }

    int main()try{jugar();
    }

    catch (exception& e){
	cerr<<"error: "<<e.what()<<"\n";
    return 0;
}

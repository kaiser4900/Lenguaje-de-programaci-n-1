#include <iostream>
#include <vector>
using namespace std;

int main()
try
{
    vector<string>nombres;
    vector<int>notas;
    string name;
    int nota;
    while(cin>>name>>nota){
        if(name!="SinNombre" || nota!=0){
            if(nombres.size()==0){
                notas.push_back(nota);
                nombres.push_back(name);

            }
            else{
                for(int i=0; i<nombres.size();i++){
                    if(name==nombres[i]){
                        throw runtime_error("Datos repetidos");
                    }
                }
                notas.push_back(nota);
                nombres.push_back(name);

            }
        }
        else{
            cout<<"Los datos guardados con exito son: "<<endl;
            for(int x=0; x<nombres.size();++x){
                cout<<nombres[x]<<" "<<notas[x]<<endl;
            }
            return 0;
        }
    }
}

    catch (exception& e){
        cerr<<"error: "<<e.what()<<"\n";
    return 0;
    }

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
                        throw runtime_error("ya ingresaron ese nombre");
                    }
                }
                notas.push_back(nota);
                nombres.push_back(name);

            }
        }
        else{
            return 0;
        }
    }
}

    catch (exception& e){
        cerr<<"error: "<<e.what()<<"\n";
    return 0;
    }

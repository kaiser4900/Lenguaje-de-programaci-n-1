#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<string>nombres;
    vector<int>contadores;

    nombres.push_back("Fernanda");
    nombres.push_back("Thatyana");
    nombres.push_back("Blanca");
    nombres.push_back("Angie");
    nombres.push_back("Blanca");
    nombres.push_back("Blanca");

    string moda;
    int suma=0;
    int mayor=0;
    for(int i=0; i<nombres.size();i++){
        for(int x=0; x<nombres.size(); x++){
            if(nombres[i]==nombres[x]){
                suma++;
            }
        }
        if(suma>mayor){
            moda=nombres[i];
            mayor=suma;
        }
        suma=0;
    }
    cout << moda <<" esta de moda"<< endl;
    return 0;
}

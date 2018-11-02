#include<iostream>
#include<vector>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<stdexcept>

using namespace std;

int main()
try
{

	vector<string>pc;
	pc.push_back("piedra");
	pc.push_back("papel");
	pc.push_back("tijera");

	char jugada;

	int cantpc=0,canth=0, jugarpc=0;

	while(cantpc<3 or canth<3){
		cout<<"Escoja su jugada (piedra=p, tijera=t, papel= h): ";
		cin>>jugada;
		int num =0;

		srand(time(NULL));

		num = 0 + rand() % ((2+0)-0);

		jugarpc=num;

		switch(jugada){
			case 'p':
				if(jugarpc==0){
					cout<<pc[0]<<" empato con "<<pc[jugarpc]<<endl;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
				}
				else if(jugarpc==1){
					cout<<pc[0]<<" pierde contra "<<pc[jugarpc]<<endl;
					cantpc++;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
				}
				else if(jugarpc==2){
					cout<<pc[0]<<" gana contra "<<pc[jugarpc]<<endl;
					canth++;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
				}
				if(canth==3 or cantpc==3){
					canth=3;
					cantpc=3;
				}
				break;

			case't':
				if(jugarpc==2){
					cout<<pc[2]<<" empato con "<<pc[jugarpc]<<endl;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
				}
				else if(jugarpc==0){
					cout<<pc[2]<<" pierde contra "<<pc[jugarpc]<<endl;
					cantpc++;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
				}
				else if(jugarpc==1){
					cout<<pc[2]<<" gana contra "<<pc[jugarpc]<<endl;
					canth++;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
				}
				if(canth==3 or cantpc==3){
					canth=3;
					cantpc=3;
				}

				break;

				case'h':
					if(jugarpc==1){
					cout<<pc[1]<<" empato con "<<pc[jugarpc]<<endl;
					cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
					}
					else if(jugarpc==2){
						cout<<pc[1]<<" pierde contra "<<pc[jugarpc]<<endl;
						cantpc++;
						cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
					}
					else if(jugarpc==0){
						cout<<pc[1]<<" gana contra "<<pc[jugarpc]<<endl;
						canth++;
						cout<<"Score:\npc: "<<cantpc<<"\nUsted: "<<canth<<endl;
					}
					if(canth==3 or cantpc==3){
						canth=3;
						cantpc=3;
					}
					break;

                default:
                    throw runtime_error("No se ha ingresado una jugada valida");


		}
	}
}
    catch (exception& e){
	cerr<<"error: "<<e.what()<<"\n";
    return 0;
    }


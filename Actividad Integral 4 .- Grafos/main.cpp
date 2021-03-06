  /*
 * main.cpp
 *
 *  Created on: 19/11/2020
 *      Author: Eduardo Rodríguez Gil
 */
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "program.h"

using namespace std;

int main(int argc, char* argv[]) {
    
    vector<string> separator, v;
    string line, word;
    ifstream datos;
    datos.open("personajes.txt", ios::in);
	while(!datos.eof()) {
        getline(datos,line);
        v.push_back(line);      
    }
	datos.close();
	
	vector<string> victorias, juego, numero, personaje;

    for (ifstream n("personajes.txt"); n;) {
        string d;
        if (n>>d)
            victorias.push_back(d);
        if (n>>d)
            juego.push_back(d);
        if (n>>d)
            numero.push_back(d);
        if (n>>d)
            personaje.push_back(d);
    }
	
	Program<string> s;
  int choice;
	int option;
	string start;
  string final;

	cout<<"Super Smash Bros"<<endl;
  cout<<"\n"<<endl;
	cout<<"Esta es una base de datos de los personajes de Super Smash Bros"<<endl;
  cout<<"\n"<<endl;
	cout<<"¿Que te gustaria revisar?"<<endl;
  cout<<"\n"<<endl;
	cout<<"1 = Saber el numero de victorias o el mejor juego del personaje."<<endl;
  cout<<"\n"<<endl;
	cout<<"2 = Saber los 5 juegos que cuenta con mas personajes."<<endl;
  cout<<"\n"<<endl;
  cout<<"Selecciona: ";
	cin>>choice;
	
	if(choice == 1) {
    cout<<"1 = Número de victorias que tienen en total las sagas de los personajes"<<endl;
    cout<<"\n"<<endl;
    cout<<"2 = Número del 1 al 6, siendo 1 la mejor saga de los personajes y 6 la peor saga de los personajes"<<endl;
    cout<<"\n"<<endl;
    cout<<"Selecciona: ";
    cin>>option;
	
		if(option == 1) {
		    cout<<"Elige un número entre 10 y 60 (Únicamente múltiplos de 10 y en orden ascendente): ";
		    cin>>start;
		    cout<<"Elige un número entre 10 y 60 (Únicamente múltiplos de 10 y en orden ascendente): ";
		    cin>>final;
		    cout<<"\n"<<endl;
        if(start>final)
			    cout<<"Error";
			else {
			    s.order_data(v,victorias); 
			    s.find_data(v, victorias, start, final);
			}
		}
		else if(option == 2) {
		    cout<<"Elige un número entre 1 y 6 (Únicamente números enteros y en orden ascendente): ";
		    cin>>start;
		    cout<<"Elige un número entre 1 y 6 (Únicamente números enteros y en orden ascendente):";
		    cin>>final;
		    cout<<"\n"<<endl; 
        if(start>final)
			    cout<<"Error";
			else {
				s.order_data(v, numero); 
        s.find_data(v, numero, start, final); 
			}
		}
		else {
			cout<<"Error";
		}
	}
	
	else if(choice == 2){
		Heap<int> heap(6);
		heap.add_data(juego);
	  cout<<"\n"<<endl;    
		cout<<"Los 5 juegos que cuenta con mas personajes en Super Smash Bros:";
    cout<<"\n"<<endl;
		heap.more_juegos();
	}
	else
	    cout<<"Error"<<endl;
}
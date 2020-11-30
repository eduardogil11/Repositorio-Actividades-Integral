  /*
 * main.cpp
 *
 *  Created on: 30/11/2020
 *      Author: Eduardo Rodríguez Gil
 */
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "program.h"
#include "hash.h"

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
	
	vector<string> victoria, juego, numero, personaje;

    for (ifstream n("personajes.txt"); n;) {
        string d;
        if (n>>d)
            victoria.push_back(d);
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
  cout<<"3 = Buscar las victorias de los juegos."<<endl;
  cout<<"\n"<<endl;
  cout<<"Selecciona: ";
	cin>>choice;
	
	if(choice == 1) {
    cout<<"\n"<<endl;
    cout<<"1 = Numero de victorias que tienen los juegos de los personajes"<<endl;
    cout<<"\n"<<endl;
    cout<<"2 = Numero del 1 al 6, siendo 1 el mejor juego y 6 el peor juego de los personajes"<<endl;
    cout<<"\n"<<endl;
    cout<<"Selecciona: ";
    cin>>option;
	
		if(option == 1) {
        cout<<"\n"<<endl;
		    cout<<"Elige un numero entre 10 y 60 (Unicamente multiplos de 10 y en orden ascendente): ";
		    cin>>start;
        cout<<"\n"<<endl;
		    cout<<"Elige un numero entre 10 y 60 (Unicamente multiplos de 10 y en orden ascendente): ";
		    cin>>final;
		    cout<<"\n"<<endl;
        if(start>final)
			    cout<<"Error";
			else {
			    s.order_data(v,victoria); 
			    s.find_data(v, victoria, start, final);
			}
		}
		else if(option == 2) {
        cout<<"\n"<<endl;
		    cout<<"Elige un numero entre 1 y 6 (Unicamente numeros enteros y en orden ascendente): ";
		    cin>>start;
        cout<<"\n"<<endl;
		    cout<<"Elige un numero entre 1 y 6 (Unicamente numeros enteros y en orden ascendente):";
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
	
	else if(choice == 2) {
		Heap<int> heap(6);
		heap.add_data(juego);
	  cout<<"\n"<<endl;    
		cout<<"Los 5 juegos que cuenta con mas personajes en Super Smash Bros:";
    cout<<"\n"<<endl;
		heap.more_juegos();
	}

	else if(choice==3) {
		vector<string>::iterator juegos;
		vector<string>::iterator victorias;
		juegos=(juego.begin(), juego.end());
		victorias=(victoria.begin(), victoria.end());
		juego.resize(distance(juego.begin(), juegos));
		victoria.resize(distance(victoria.begin(), victorias)); 
		
		Hash<string> hash;
		
		string saga;

		for (int i=0; i<6; i++) {
		    hash.add_data(juego[i], victoria[i]);
        } 
        
        cout<<"\n"<<endl;
        cout<<"1. Super_Mario"<<endl;
        cout<<"2. Pokemon"<<endl;
        cout<<"3. The_Legend_of_Zelda"<<endl;
        cout<<"4. Kirby"<<endl;
        cout<<"5. Donkey_Kong"<<endl;
        cout<<"6. Fire_Emblem"<<endl;
        cout<<"\n"<<endl;
        cout<<"De que juego quieres saber sus victorias (Escribir solo el nombre): ";
        cin>>saga;
		    cout<<"\n"<<endl;
	     	cout<<"Victorias: "<<hash.find(saga);
	}
	else
	    cout<<"\n\nError";
}

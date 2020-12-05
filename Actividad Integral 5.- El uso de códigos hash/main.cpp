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
#include "hash.h"

using namespace std;

unsigned int myHash(const string s) {
	unsigned int acum = 0;
	for (unsigned int i = 0; i < s.size(); i++) {
		acum += (int) s[i];
	}
	return acum;
}

int main() {
    bool look_data = false;
    vector<string> separator, v;
    string line;
    string word;
    string juego;
    ifstream datos;
    ofstream resultado;
    string mod [64] = { };
    string juegos [6] = {"Fire_Emblem", "Super_Mario", "Pokemon", "Donkey_Kong", "The_Legend_of_Zelda", "Kirby"};

    datos.open("personajes.txt", ios::in);
               while(!datos.eof()) {
                 getline(datos,line);
                 v.push_back(line);      
                 }
                 datos.close();

    Hash <string, int> chain_hash(15, myHash); 

    bool exit = false;
    while(exit == false) {
        int choice;
        int change;
        string add_juego;

        cout<<"Super Smash Bros"<<endl;
        cout<<"\n"<<endl;
        cout<<"Esta es una base de datos de las victorias con las que cuentan los juegos de Super Smash Bros"<<endl;
        cout<<"\n"<<endl;
        cout<< "1 = Cambiar las victorias de los juegos."<<endl;
        cout<<"\n"<<endl;
        cout<< "2 = Imprimir las victorias cambiadas."<<endl;
        cout<<"\n"<<endl;
        cout<< "3 = Abandonar la base de datos de Super Smash Bros."<<endl;
        cout<<"\n"<<endl;
        cout<<"Selecciona: ";
        cin>> choice;
        
        if (choice == 1) {
          look_data = true;
        }
        switch(choice){
            case 1:
            if (look_data == false) {
            cout<<"\n"<<endl;
            cout<<"Error"<<endl;
            cout<<"\n"<<endl;
            break;
             }
            cout<<"\n"<<endl;
            cout<<"1. Fire_Emblem"<<endl;
            cout<<"2. Super_Mario"<<endl;
            cout<<"3. Pokemon"<<endl;
            cout<<"5. The_Legend_of_Zelda"<<endl;
            cout<<"6. Kirby"<<endl;
            cout<<"\n"<<endl;
            cout<<"De que juego quieres modificar sus victorias (Escribir solo el nombre): ";
            cin >> add_juego;
            if(add_juego=="Fire_Emblem" 
            || add_juego=="Super_Mario" 
            || add_juego=="Pokemon" 
            || add_juego=="Donkey_Kong" 
            || add_juego=="The_Legend_of_Zelda" 
            || add_juego=="Kirby") {
            cout<<"\n"<<endl;
            cout<<"Elige un numero entre 10 y 60: ";
            cin>>change;
            cout<<"\n"<<endl;
            chain_hash.add_data(add_juego,change);
            cout<<"Se modificaron las victorias: "<<chain_hash.toString();
            cout<<"\n"<<endl;
            break;
            }
            else {
              cout<<"\n"<<endl;
              cout <<"Error"<<endl;
              cout<<"\n"<<endl;
               break;
            }
             
            case 2:
             if (look_data == false) {
             cout<<"\n"<<endl;
             cout <<"Error"<<endl;
             cout<<"\n"<<endl;
             break;
            }
               resultado.open("succes.txt");
               if (resultado.is_open()) {
                resultado<<chain_hash.toString();
                cout<<chain_hash.toString()<<endl; 
                }
                resultado.close();
                break;

                case 3:
                cout<<"\n"<<endl;
                cout<<"Abandonaste"<<endl;
                exit = true;
                }
      }
 }  
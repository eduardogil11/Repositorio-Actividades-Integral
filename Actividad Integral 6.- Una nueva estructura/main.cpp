/*
 * main.cpp
 *
 *  Created on: 03/12/2020
 *      Author: Eduardo Rodríguez Gil
 */
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <fstream>
#include <algorithm>
#include "estructura.h"

using namespace std; 

int main(int argc, char* argv[]) { 

    vector<string> separator, v;
    string line, word;
    ifstream datos;
    datos.open("juegos.txt", ios::in);
	while(!datos.eof()) {
        getline(datos,line);
        v.push_back(line);      
    }
	datos.close();
	
	vector<string>juego;
  vector<float>year;
	vector<int>anniversary;
    for (ifstream s("juegos.txt"); s;) {
        string r;
        float b;
        int h;

        if (s >> r)
            juego.push_back(r);
        if (s >> b)
            year.push_back(b);
        if (s >> h)
            anniversary.push_back(h);
    }
    
    int choice;
    ofstream out;
    out.open("success.txt",ios::out);
        
    cout<<"Super Smash Bros"<<endl;
    cout<<"\n"<<endl;
    cout<<"Que te gustaria revisar?"<<endl;
    cout<<"\n"<<endl;
    cout<<"1 = Orden ascendente de los años en que salieron los juegos de los personajes que se encuentran en Super Smash Bros."<<endl;
    cout<<"\n"<<endl;
    cout<<"2 = Orden ascendente de la cantidad de años que llevan existiendo los juegos de los personajes que se encuentran en Super Smash Bros."<<endl;
    cout<<"\n"<<endl;
    cout<<"Selecciona: ";
    cin>>choice;
    
    if(choice == 1) {
    	Shell<float>an;
    	int tam=sizeof(year)/sizeof(year[0]);
    	an.order_data(year,tam,v);
    	for(int i=0; i<tam; i++) {
    		cout<<"\n"<<v[i];
    		out<<v[i];
    		out<<"\n";
		}			
	}
	else if(choice == 2) {
		Shell<int> exi;
    	        int tam=sizeof(anniversary)/sizeof(anniversary[0]);
    	        exi.order_data(anniversary,tam,v);
    	        for(int i=0; i<tam; i++) {
    		  cout<<"\n"<<v[i];
    		  out<<v[i];
    		  out<<"\n";
		  }
	}
	else {
		cout<<"\n\nError";
	}
	out.close();
}

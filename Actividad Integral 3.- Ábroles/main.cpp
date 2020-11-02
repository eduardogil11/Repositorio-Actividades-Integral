/*
 * main.cpp
 *
 *  Created on: 02/11/2020
 *      Author: Eduardo Rodríguez Gil
 */

#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "bst.h"

using namespace std;

struct Data {
  int victorias; 
  string juego;
  int numero; 
  string personaje;
};

int main(int argc, char* argv[]) {
  
  ifstream archive;
	char dospuntos;
	vector<Data>datos;
	int cont = 0;
  string filename;
  
  Data soloDatos;
  archive.open("personajes.txt");
	if (archive) {
		cout << "Número del videojuego" << endl;
    cout << "\n";
		while (!(archive.eof()))
		{
			archive >> soloDatos.victorias; 
      archive >> soloDatos.juego;
			archive >> soloDatos.numero; 
			getline(archive, soloDatos.personaje);
			datos.push_back(soloDatos);
      cont = cont + 1;
		}
		archive.close();
	}

	else { 
    cout << "Error" << endl; 
    }
  
	BST<int> bst;

  for(int i = 0; i <= cont; i++) { 
    bst.add(datos[i].numero); 
    }

	cout<<bst.visit()<<endl;
	
	return 0;
}
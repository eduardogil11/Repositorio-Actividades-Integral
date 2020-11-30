  /*
 * hash.h
 *
 *  Created on: 30/11/2020
 *      Author: Eduardo Rodríguez Gil
 */
#ifndef HASH_H
#define HASH_H

#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

template <class T> class Hash;

template <class T>
class Table {
    public:
       Table(string r, string h);
       string r;
       string h;
       friend class Hash<T>;
};

template <class T>
Table<T>::Table(string r, string h) {
    this->r = r;
    this->h = h;
}

template <class T>
class Hash {
	private:
		int cont = 7;
		Table<T> **a;
		
	public:
		Hash();
    ~Hash();
		void add_data(string r, string h);
		string find(string r);
    int function(string r);
};

template <class T>
Hash<T>::Hash() {
	a = new Table<T> * [cont];
	for (int i=0; i<cont; i++) {
        a[i] = NULL;
    }
}

template <class T>
Hash<T>::~Hash() {
	for (int i=0; i<cont; i++) {
        if (a[i] != NULL){
            delete a[i];
            delete[] a;
        }
    }
}

template <class T>
void Hash<T>::add_data(string r, string h) {
	int b = function
  (r);
        while (a[b]!=NULL && a[b]->r!=r) {
           b = (b+1)%cont;
        }
        if (a[b] != NULL)
           delete a[b];
		a[b] = new Table<T>(r, h);
}

template <class T>
string Hash<T>::find(string r) {
    int b = function(r);  
    while (a[b] != NULL && a[b]->r != r) {
       b = (b+1)%cont;
    }      
    if (a[b] == NULL)
    return "none";
    else
    return a[b]->h;
}

template <class T>
int Hash<T>::function(string r) {
	int v;
	if(r == "Super_Mario")
		v = 20;
	else if(r == "Pokemon")
		v = 60;
	else if(r == "The_Legend_of_Zelda")
		v = 50;
	else if(r == "Kirby")
		v = 40;
  else if(r == "Donkey_Kong")
    v = 30;
	else
		v = 10;
	return v%cont;
}

#endif /*HASH_H*/
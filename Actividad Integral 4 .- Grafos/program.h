 /*
 * program.h
 *
 *  Created on: 19/11/2020
 *      Author: Eduardo Rodríguez Gil
 */
#ifndef PROGRAM_H
#define PROGRAM_H

#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

template <class T>
class Program {		
	public:
	void order_data(vector<string> &s, vector<string> &b);
	void find_data(vector<T> &s, vector<string> &b, string in, string fint);
};

template <class T>
void Program<T>::order_data(vector<string> &s, vector<string> &b) {
	int min;
	string aux, aux2;
	for(int i=0; i<b.size()-1; i++) {
		min=i;
		for(int j=i+1; j<b.size()-1; j++) {
			if(b[j]<b[min]) {
				min=j;
			}
		}
		aux=b[i];
		b[i]=b[min];
		b[min]=aux;
		
		aux2=s[i];
		s[i]=s[min];
		s[min]=aux2;
	}
}

template <class T>
void Program<T>::find_data(vector<T> &s, vector<string> &b, string in, string fint) {
	ofstream resultado;
	resultado.open("succes.txt",ios::out);
	for(int i=0; i<=s.size(); i++) {
        if(b[i]>=in && b[i]<=fint) {
        resultado<<s[i]<<"\n";
        cout<<s[i]<<endl;
        }
	}
	resultado<<"\n\n"<<endl;
	resultado.close();
}

template <class T>
class Heap {
    private:
	    T *data;
	    unsigned int tam;
	    unsigned int cont;
      int superMario, pokemon, theLegendofZelda, kirby, donkeyKong,fireEmblem;	

    public:
	    Heap(unsigned int ta);
	    void add_data(vector<string> &b);
	    void more_juegos();
	    void push(T);
      void clear();
      bool empty();
	    bool full();
      int top(); 
      int size();	   	 
	    unsigned int left(unsigned int);
	    unsigned int right(unsigned int);
      unsigned int parent(unsigned int);
	    void heapif(unsigned int);
	    void swap(unsigned int, unsigned int); 
      T pop();  
};

template <class T>
Heap<T>::Heap(unsigned int ta) {
	tam = ta;
	data = new T[tam];
	cont = 0;
	superMario = 0;
	pokemon = 0;
	theLegendofZelda = 0;
	kirby = 0; 
	donkeyKong = 0;
	fireEmblem = 0;	   
}

template <class T>
void Heap<T>::add_data(vector<string> &s) {
	for(int i = 0; i <= s.size(); i++) {
    	if(s[i] == "Super_Mario")
    	    superMario += 1;
    	if(s[i] == "Pokemon")
    	    pokemon += 1;
    	if(s[i] == "The_Legend_of_Zelda")
    	    theLegendofZelda += 1;
    	if(s[i] == "Kirby")
    		  kirby += 1;
    	if(s[i] == "Donkey_Kong")
    		  donkeyKong += 1;
    	if(s[i] == "Fire_Emblem")
		  	  fireEmblem += 1;
	}
	push(superMario), push(pokemon), push(theLegendofZelda), push(kirby), push(donkeyKong), push(fireEmblem);
}

template <class T>
void Heap<T>::more_juegos() {
	int d=1;
  for(int i=5; i>0; i--) {
		if(data[i] == superMario)
    	    cout<<d<<" = Super Mario\n";
    	else if(data[i] == pokemon)
    	    cout<<d<<" = Pokemon\n";
    	else if(data[i] == theLegendofZelda)
    	    cout<<d<<" = The Legend of Zelda\n";
    	else if(data[i] == kirby)
    	    cout<<d<<" = Kirby\n";
    	else if(data[i] == donkeyKong)
    	    cout<<d<<" = Donkey Kong\n";
    	else if(data[i] == fireEmblem)
    	    cout<<d<<" = Fire Emblem\n";
    	else
    	    cout << "Error";
    	d++;
	}
}

template <class T>
void Heap<T>::push(T val) {
	unsigned int pos;
	pos = cont;
	cont++;
	while (pos > 0 && val < data[parent(pos)]) {
		data[pos] = data[parent(pos)];
		pos = parent(pos);
	}
	data[pos] = val;
}

template <class T>
void Heap<T>::clear() {
	cont = 0;
}

template <class T>
bool Heap<T>::empty() {
	return (cont == 0);
}

template <class T>
bool Heap<T>::full() {
	return (cont == tam);
}

template <class T>
int Heap<T>::top() {
	return data[0];
}

template <class T>
int Heap<T>::size() {
	return cont;
}

template <class T>
unsigned int Heap<T>::left(unsigned int pos) {
	return ((2 * pos) + 1);
}

template <class T>
unsigned int Heap<T>::right(unsigned int pos) {
	return ((2 * pos) + 2);
}

template <class T>
unsigned int Heap<T>::parent(unsigned int pos) {
	return (pos - 1) / 2;
}

template <class T>
void Heap<T>::heapif(unsigned int pos) {
	unsigned int le = left(pos);
	unsigned int ri = right(pos);
	unsigned int min = pos;
	if (le <= cont && data[le] < data[min]) {
		min = le;
	}
	if (ri <= cont && data[ri] < data[min]) {
		min = ri;
	}
	if (min != pos) {
		swap(pos, min);
		heapif(min);
	}
}

template <class T>
void Heap<T>::swap(unsigned int i, unsigned int j) {
	T aux = data[i];
	data[i] = data[j];
	data[j] = aux;
}

template <class T>
T Heap<T>::pop() {
	T aux = data[0];

    data[0] = data[--cont];
    heapif(0);
    return aux;
  }

  #endif /*PROGRAM_H*/
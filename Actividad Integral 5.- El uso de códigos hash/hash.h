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

template <class Key, class Value>
class Hash {
private:
	unsigned int (*func) (Key);
	unsigned int size;
	unsigned int cont;
	vector<Key> *keys;
	vector<Value> *values;
	long index(Key);

public:
	Hash(unsigned int, unsigned int (*f) (Key));
	~Hash();
  string toString();
  Value obtain(Key);
  bool add_data(Key, Value);
  bool include_data(Key);
	bool completed();
};

template <class Key, class Value>
long Hash<Key, Value>::index(Key k) {
	return func(k) % size;
}

template <class Key, class Value>
Hash<Key, Value>::Hash(unsigned int sze, unsigned int (*f) (Key)) {
	size = sze;
	keys = new vector<Key>[size];
	if (keys == 0) {
		cout<<"Error"<<endl;
	}
	values = new vector<Value>[size];
	if (values == 0) {
		cout<<"Error"<<endl;
	}
	func = f;
	cont = 0;
}

template <class Key, class Value>
Hash<Key, Value>::~Hash() {
	delete [] keys;
	keys = 0;
	delete [] values;
	values = 0;
	size = 0;
	func = 0;
	cont = 0;
}

template <class Key, class Value>
string Hash<Key, Value>::toString() {
	stringstream aux;
	for (int i = 0; i < size; i++){
			if (!keys[i].empty()){
				aux<<""<< i ;
				for (int j = 0; j < keys[i].size(); j ++){
						 aux<<" = "<<keys[i][j]<< ": "<< values[i][j]<<"";
				}
				aux<<"";
			}
	}
	return aux.str();
}

template <class Key, class Value>
Value Hash<Key, Value>::obtain(Key k) {
	unsigned int i, start;
	long pos;
	pos = index(k);
  for(int i=0; i < keys[pos].size(); i++){
    if(keys[pos][i] == k){
      return values[pos][i];
    }
  }
  cout<<"Error"<<endl;
}

template <class Key, class Value>
bool Hash<Key, Value>::add_data(Key k, Value v) {
	unsigned int i, start;
	long pos;
	if (completed()) {
		cout<<"Error"<<endl;
	}
	pos = index(k);
	if (keys[pos].empty()) {
    keys[pos].push_back(k);
		values[pos].push_back(v);
    cont++;
		return true;
	}
  else {
    for(int i=0; i < keys[pos].size(); i++){
      if(keys[pos][i] == k){
        values[pos][i] = v;
        return true;
      }
    }
    keys[pos].push_back(k);
    values[pos].push_back(v);
    cont++;
    return true;
  }
}

template <class Key, class Value>
bool Hash<Key, Value>::include_data(const Key k) {
	long pos;
	pos = index(k);
  for(int i=0; i < keys[pos].size(); i++){
    if(keys[pos][i] == k){
      return true;
    }
  }
	return false;
}

template <class Key, class Value>
bool Hash<Key, Value>::completed() {
	return (cont >= size);
}

#endif /*HASH_H*/
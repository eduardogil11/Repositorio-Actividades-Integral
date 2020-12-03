/*
 * main.cpp
 *
 *  Created on: 03/12/2020
 *      Author: Eduardo Rodríguez Gil
 */
#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <fstream>

using namespace std;

template <class T>
class Shell {
	public:
  void order_data(vector<T> &r, int tam, vector<string> &m);
};

template <class T>
void Shell<T>::order_data(vector<T> &r, int tam, vector<string> &m) {
	for (int gap=tam/2; gap>0; gap/=2) { 
        for (int i=gap; i<tam; i+=1) { 
            int temp = r[i];
            string temp2= m[i];
            int j;   
            for (j=i; j >= gap&&r[j-gap] > temp; j -= gap) {
            r[j] = r[j-gap]; 
            m[j]=m[j-gap];
			}          
            r[j]=temp; 
            m[j]=temp2;			 
        } 
    }
}

#endif /*ESTRUCTURA_H*/

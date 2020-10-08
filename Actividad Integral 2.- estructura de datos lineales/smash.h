#ifndef SMASH_H
#define SMASH_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

template <class T>
class smash{		
	public:
	void order(vector<string> &b, vector<string> &h);
	void search(vector<T> &b, vector<string> &h, string in, string fin);
};

template <class T>
void smash<T>::order(vector<string> &b, vector<string> &h){
	int won;
	string aux, aux2;
	for(int i=0; i<h.size()-1; i++){
		won=i;
		for(int j=i+1; j<h.size()-1; j++){
			if(h[j]<h[won]){
				won=j;
			}
		}
		aux=h[i];
		h[i]=h[won];
		h[won]=aux;
		
		aux2=b[i];
		b[i]=b[won];
		b[won]=aux2;
	}
}

template <class T>
void smash<T>::search(vector<T> &b, vector<string> &h, string in, string fin){
	ofstream succes;
	succes.open("succes.txt",ios::out);
	for(int i=0; i<=b.size(); i++){
        if(h[i]>=in && h[i]<=fin){
        succes<<b[i]<<endl;
        cout<<b[i]<<endl;
        }
	}
	succes.close();
}

#endif /*SMASH_H*/
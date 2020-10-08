  
/*
 * main.cpp
 *
 *  Created on: 07/10/2020
 *      Author: Eduardo Rodríguez Gil
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
#include "smash.h"

using namespace std;

int main(int argc, char* argv[]){
    
    vector<string> ult, bros;
    string lnl,pl;
    ifstream data;
    data.open("smash.txt", ios::in);
	while(!data.eof()){
        getline(data,lnl);
        bros.push_back(lnl);      
    }
	data.close();

	vector<string> win,game,num,player;
    for (ifstream smash("smash.txt"); smash;){
        string super;

        if (smash >> super)
            win.push_back(super);
        if (smash >> super)
            game.push_back(super);
        if (smash >> super)
            num.push_back(super);
        if (smash >> super)
            player.push_back(super);
    }
	
	smash<string> s;
	int ssb;
	string start, fin;
	
	cout<<"------------------------------Super Smash Bros------------------------------"<<endl;
	cout<<"CHOOSE YOUR CHARACTER"<<endl;
	cout<<"1 = Wins o 2 = Game"<<endl;
	cin>>ssb;
	
	if(ssb == 1){
    	cout<<"Cuantas victorias en SUPER SMASH BROS quieres ver del 10 al 90"<<endl;
	    cout<<"Ingresa del 10 al 90:";
	    cin>>start;
	    cout<<"Ingresa del 10 al 90:";
	    cin>>fin;
	    
		if(start>fin)
		    cout<<"warning"<<endl;
		    
		else{
		    s.order(bros,win); 
		    s.search(bros,win,start,fin);
		}
	}
  
	else if(ssb == 2){
      cout<<"Que personajes en SUPER SMASH BROS quieres ver del 1 al 9"<<endl;
	    cout<<"Ingresa del 1 al 9:";
	    cin>>start;
	    cout<<"Ingresa del 1 al 9:";
	    cin>>fin;
	   
		if(start>fin)
		    cout<<"warning"<<endl;
		    
		else{
			s.order(bros,num); 
		  s.search(bros,num,start,fin); 
		}
	}
}
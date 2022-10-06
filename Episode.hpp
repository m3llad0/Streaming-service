#include<iostream>
#include<string>

#include"ListInterface.hpp"

#pragma once

using namespace std;

class Episode: public Element
{
    protected:
        int rate;
    
    public:
        Episode(){}
        Episode(string _name, int _rate): Element(_name),rate(_rate){}
        int getRate();
        void print(){cout << "Episode name: " << name << endl;}
        
}; 
int Episode::getRate(){return rate;}


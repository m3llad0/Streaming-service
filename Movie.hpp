#include<iostream>
#include<string>

#include"Element.hpp"

#pragma once

using namespace std;

class Movie: public Element
{
    protected:
        int rate;
    public:
        Movie(){}
        Movie(string name, int _rate): Element(name), rate(_rate){}
        int getRate();
        void print(){ cout << "Movie name: " <<name << endl;}        

};
int Movie::getRate(){return rate;}

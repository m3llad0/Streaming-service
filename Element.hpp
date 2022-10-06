#include<iostream>
#include<string>

#pragma once

using namespace std;

class Element
{
    protected:
        Element* next;
        string name;
    public:
        Element(){}
        Element(string _name): name(_name){}

        void setNextElement(Element*);
        Element* getNextElement();
        string getName(){ return name;}
        virtual void print(){};
        virtual ~Element(){}

};
void Element::setNextElement(Element* elemnt){next = elemnt;}
Element* Element::getNextElement(){return next;}





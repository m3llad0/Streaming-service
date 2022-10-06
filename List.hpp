#include<iostream>
#include<string>
#include"Element.hpp"
#include"ListInterface.hpp"

using namespace std;

#pragma once

class LinkedList: public ListInterface
{
    Element* firstElement;

    public:
        LinkedList():firstElement(0){}
        void add(Element*);
        void add(int position, Element*);
        Element* get(int index);
        void remove(int index);
        int size();
        void print();
    
    ~LinkedList()
    {
        Element* temp = firstElement;

        while(temp->getNextElement() != 0)
        {
            Element* prev = temp;
            temp = temp->getNextElement();
            delete prev;
        }

        delete temp;
    }
};
    void LinkedList::add(Element* elmnt)
    {
        if(firstElement == 0)
        {
            firstElement = elmnt;
            firstElement->setNextElement(0);
           
        }
        else
        {
            Element* temp = firstElement;
            while(temp->getNextElement() != 0)
            {
                temp = temp->getNextElement();
               
            }
            elmnt->setNextElement(0);
            temp->setNextElement(elmnt);
            
        }
    }
    void LinkedList::add(int position, Element* elemnt)
    {  
        if (firstElement == 0)
        {
            firstElement = elemnt;
            firstElement->setNextElement(0);

        }
        else
        {
            Element* temp = firstElement;
            int i = 1;

            while(i <= position && temp->getNextElement() != 0)
            {
                temp = temp->getNextElement();
                i++;
            }
            elemnt->setNextElement(temp->getNextElement());
            temp->setNextElement(elemnt);
        }

    }
    Element* LinkedList::get(int index)
    {
        int i = 1;
        Element* temp = firstElement;
        while(i <= index)
        {
            temp = temp->getNextElement();
            i++;

        }

        return temp;
    }
    int LinkedList::size()
    {
        int i = 0;
        Element* temp = firstElement;

        while(temp != 0)
        {
            temp = temp->getNextElement();
            i++;
        }

        return i;
    }
    void LinkedList::print()
    {
        Element* temp = firstElement;
        while(temp != 0)
        {
            temp->print();
            temp = temp->getNextElement();
            
        }
    }
    void LinkedList::remove(int position)
    {
        Element* temp = firstElement;
        int i = 1;
    
        /*while(i < position-1)
        {
            temp = temp->getNextElement();
            temp->getName();
            i++;
        }*/

        for(int i =1; i < position; i++)
        {
            temp = temp->getNextElement();
        }

        Element* obj = temp->getNextElement();
        obj = obj->getNextElement();
        temp->setNextElement(obj);

       
    }
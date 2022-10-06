#include"List.hpp"
#include"Element.hpp"
#include"Movie.hpp"
#include"Serie.hpp"
#include"Episode.hpp"

#pragma once

class Admin
{
    protected:
        ListInterface* list;

    public:
        Admin():list(new LinkedList){}
    
    void addMovie(Movie* mv, int index)
    {
        list->add(index, mv);
    }
    void addSerie(Series* ss, int index)
    {
        list->add(index, ss);
    }
    void print()
    {
        list->print();
    }
    void remove(int index)
    {
        list->remove(index);
    }
    void size()
    {
        int sz = list->size();

        cout << sz << endl;
    }
    void printRate()
    {
        int num = list->size();
        for(int i = 0; i <= num; i++)
        {
            Movie* mov = dynamic_cast<Movie*>(list->get(i));
            if(mov != 0)
            {
                cout << mov->getName()<< " Rate: " << mov->getRate() << endl;
                
            }
        }
    }
    void printRateS()
    {
        //Series* rate->
    }
    ~Admin()
    {
        delete list;
    }
};




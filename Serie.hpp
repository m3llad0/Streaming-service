#include<iostream>
#include<string>

#include"Element.hpp"
#include"Episode.hpp"

#pragma once

using namespace std;

class Series: public Element
{
    protected:
        int rate;
        ListInterface* episodes;
        
    public:
        Series(){}
        Series(string _name): Element(_name), episodes(new LinkedList){}
        
        void print(){cout << "Series name: " << name << endl;}
        void addEpisode(Episode* ep, int index);
        void getEpisodes();
        void getRate();
        void getSize();
        
       
};

void Series::addEpisode(Episode* ep, int index)
{
    episodes->add(index, ep);
}
void Series::getEpisodes()
{
    episodes->print();
}
void Series::getSize()
{  
    episodes->size();
}
void Series::getRate()
{

    double prm = 0;
    int j = episodes->size();
        for(int i = 0; i <= j; i++)
        {
            Episode* ss = dynamic_cast<Episode*>(episodes->get(i));
            if(ss != 0)
            {
                prm = prm + ss->getRate();
            }
        }
    cout << "Rate: " << prm/j << endl;
    
    
}



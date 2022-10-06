#include<iostream>
#include<string>
#include"Admin.hpp"

using namespace std;

int main()
{ 
    bool menu = true;
    int option = 0;
    Movie mv1("Avengers", 8);
    Movie mv2("Batman", 9);
    Movie mv3("Dragon Ball: Evolution", 3);
    Movie mv4("The Fight Cub", 9);

    Series ss1("The boys");
        Episode ss1e1("The Name of the Game", 9);
        Episode ss1e2("Cherry", 9);
        Episode ss1e3("Get some", 9);
        Episode ss1e4("The female species", 9);
    
    Series ss2("Invincible");
        Episode ss2e1("It's about time", 9);
        Episode ss2e2("Here goes nothing", 9);
        Episode ss2e3("Who you calling ugly?", 8);
        Episode ss2e4("Neil Amstrong, eat your heart out", 8);

    Series ss3("Breaking Bad");
        Episode ss3e1("Pilot", 9);
        Episode ss3e2("Cat's in the bag...", 9);
        Episode ss3e3("... And the bag's in the river", 9);
        Episode ss3e4("Cancer man", 8);
        
    Series ss4("Iron Fist");
        Episode ss4e1("Snow gives away", 7);
        Episode ss4e2("Shadow Hawk Takes Flight", 8);
        Episode ss4e3("Rolling Thunder Cannon Punch", 8);
        Episode ss4e4(" Eight Diagram Dragon Palm", 8);
           
    Admin a;

    while (menu == true)
    {
        cout << "" << endl;
        cout << "1) Add movies" << endl;
        cout << "2) Add series" << endl;
        cout << "3) Remove element" << endl;
        cout << "4) Show" << endl;
        cout << "5) Show movies rate" << endl;
        cout << "6) Show series rate" << endl;
        cout << "7) Show episodes" << endl;
        cout << "8) Quit" << endl;
        cout << "Choose an option" << endl;
        cin >> option;

        if(option == 1)
        {  
            a.addMovie(&mv1, 1);
            a.addMovie(&mv2, 2);
            a.addMovie(&mv3, 3);
            a.addMovie(&mv4, 4);

            //a.size();
            cout << "Peliculas añadidas correctamente" << endl;            
        }
        else if (option == 2)
        {
    
            a.addSerie(&ss1,5);
                ss1.addEpisode(&ss1e1,1);
                ss1.addEpisode(&ss1e2,2);
                ss1.addEpisode(&ss1e3,3);
                ss1.addEpisode(&ss1e4,4);

            a.addSerie(&ss2,6);
                ss2.addEpisode(&ss2e1,1);
                ss2.addEpisode(&ss2e2,2);
                ss2.addEpisode(&ss2e3,3);
                ss2.addEpisode(&ss2e4,4);

            a.addSerie(&ss3,7);
                ss3.addEpisode(&ss3e1,1);
                ss3.addEpisode(&ss3e2,2);
                ss3.addEpisode(&ss3e3,3);
                ss3.addEpisode(&ss3e4,4);    

            a.addSerie(&ss4,8);
                ss4.addEpisode(&ss4e1,1);
                ss4.addEpisode(&ss4e2,2);
                ss4.addEpisode(&ss4e3,3);
                ss4.addEpisode(&ss4e4,4);    
                        
            cout << "Serie añadidas correctamente" << endl;
            
        }
        else if (option == 3)
        {   int ps;
            a.print();
    
            cout << "Ingrese la posición a remover: "; cin >> ps;
            a.remove(ps);
            
        }
        else if (option == 4)
        {
            a.print();
        }
        else if (option == 5)
        {
            a.printRate();
        }
        else if (option == 6)
        {
            cout << ss1.getName()+": "; ss1.getRate(); 
            cout << ss2.getName()+": "; ss2.getRate(); 
            cout << ss3.getName()+": "; ss3.getRate(); 
            cout << ss4.getName()+": "; ss4.getRate(); 
        }
        else if (option == 7)
        {
            cout << ss1.getName() << endl; ss1.getEpisodes();
            cout << ss2.getName() << endl; ss2.getEpisodes();
            cout << ss3.getName() << endl; ss3.getEpisodes();
            cout << ss4.getName() << endl; ss4.getEpisodes();
        }
        else if (option == 8)
        {
            cout << "Goodbye";
            a.~Admin();
            break;
             
            
        }
     
    }
}
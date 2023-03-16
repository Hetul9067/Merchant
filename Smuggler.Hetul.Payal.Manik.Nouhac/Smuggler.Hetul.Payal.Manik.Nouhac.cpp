// Smuggler.Hetul.Payal.Manik.Nouhac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "City.h"
#include "User.h"

#include <iostream>
#include <vector>
//#include "Item.CPP"

using namespace std;

int main()
{

    
    //city initialization
    City c1("Montreal") ;
    City c2("Toronto");
    City c3("Vancouver");

    //items initialization for cities
    
    //montreal's item
    Item im1("lsd", 10, 20);
    Item im2("weed", 15, 40);
    Item im3("heroin", 30, 50);
    

    vector<Item> l1;
    l1 = { im1, im2, im3 };
    c1.setInventroies(l1);


    c1.cityMenu();

    //Toronto's item
    Item it1("lsd", 10, 20);
    Item it2("weed", 15, 30);
    Item it3("heroin", 30, 50);
    Item it4("Cocaine", 10, 20);

    vector<Item> l2;
    l2 = { it1, it2, it3, it4 };
    c2.setInventroies(l2);


    c2.cityMenu();


    //Vancouver's item
    Item iv1("lsd", 10, 20);
    Item iv2("weed", 15, 30);
    Item iv3("heroin", 30, 50);
    Item iv4("Cocaine", 10, 20);
    Item iv5("Cetamine", 20, 20);


    vector<Item> l3;
    l3 = { iv1, iv2, iv3, iv4, iv5 };
    c3.setInventroies(l3);


    c3.cityMenu();

    //
    //
    //
    ////user initialization
    //Item iu1("lsd", 10, 15, 20);
    //Item iu2("weed", 15, 20, 30);
    //Item iu3("heroin", 30, 45, 50);

    //User u1("Hetul", );
    //vector<Item> l2;
    //cout << "hello this is the information regarding to user;" << "\n";
    //l2 = { iu1, iu2, iu3 };
    //u1.setInventories(l2);
    //u1.userMenu();
    ////u1.setInventories();


    ///*std::cout << "Hello World!\n";*/


}

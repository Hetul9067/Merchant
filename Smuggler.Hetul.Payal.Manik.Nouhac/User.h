

#ifndef _USER_H_
#define _USER_H_
#include "Item.h"
#include "City.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {

private:
	string name;
	float userMoney = 100;
	City* currentCity = NULL;
	City* nextCity;
	vector<City*> citiesLi;

	vector<Item> inventories;
public:
	User();
	User(string n, vector<City*> &cities);

	void randomCityAssigner();
	
	void randomNextCityAssigner();

	void inventoriesListDisplay();

	void userAnsChecker(int a);

	void userMenu();

	void sellTheirWares();

	void buyTheirWares();

	string getName();

	void setName(string n);

	vector<Item> getInventories();

	void setInventories(vector<Item> inv);

};

#endif
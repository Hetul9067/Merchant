

#ifndef _USER_H_
#define _USER_H_
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class User {

private:
	string name;
	float userMoney;
	string currentCityName;
	string nextCityName;

	vector<Item> inventories;
public:
	User(string n, string cityName);


public:
	void userMenu();

	void sellTheirWares();

	string getName();

	void setName(string n);

	vector<Item> getInventories();

	void setInventories(vector<Item> inv);

};

#endif
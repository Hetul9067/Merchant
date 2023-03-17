#include "User.h"
#include "Item.h"
#include "City.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


//constructor
User::User(string n, vector<City*> &cities) {
	name = n;
	for (int i = 0; i < cities.size(); i++) {
		//City* c = ;
		citiesLi.push_back(new City());
		citiesLi[i]->setCityName(cities[i]->getCityName());
		cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$";
		citiesLi[i]->setInventroies(cities[i]->getInventories());

	}
	citiesLi = cities;
	randomCityAssigner();
	randomNextCityAssigner();
}

void User::randomCityAssigner() {
	srand(time(nullptr));
	int ran = rand() % 3;
	
	while (currentCity == NULL || citiesLi[ran] != currentCity) {

		currentCity = citiesLi[rand() % 3];
	}
}
void User::randomNextCityAssigner() {
	srand(time(nullptr));
	int ran = rand() % 3;

	do{

		nextCity = citiesLi[rand() % 3];
	} while (nextCity == currentCity);
}

void User::inventoriesListDisplay() {
	cout << "#############################################################" << "\n";

	cout << "##### Item\t\t" << "Buying Price\t\t" << "Selling Price\n";
	for (int i = 0; i < inventories.size();i++) {
		cout << "##### " << i+1 << ". " << inventories.at(i).getItemName() << "\t\t\t" << inventories[i].getItemBuyingPrice()
			<< "\t\t\t" << inventories.at(i).getItemSellingPrice() << "\n";


	}
	
	cout << "#############################################################" << "\n";
}

//for selling wares
void User::sellTheirWares() {
	int ans = 0;
	int quantity = 0;
	bool quantityChecker = false;
	float earnedMoney = 0;


	cout << "#############################################################" << "\n";
	cout << "##### Item\t\t" << "Selling Price\n";
	for (int i = 0; i < inventories.size();i++) {
		cout << "##### " << i + 1 << ". " << inventories.at(i).getItemName() << "\t\t\t" << inventories.at(i).getItemSellingPrice() << "\n";
	}
	cout << "#############################################################" << "\n";

	//inventoriesListDisplay();
	cout << "Please enter the item number for selling : \n";
	cin >> ans;
	
	do {

		cout << "Please enter the quantities of the "<< inventories[ans].getItemName() <<" : \n";
		cin >> quantity;
		quantityChecker = false;
		if (quantity > inventories[ans-1].getItemQuantity()) {
			cout << "########################################\n";
			cout << "Sorry, we don't have that much quantity \n";
			quantityChecker = true;
		}
		} while (quantityChecker);

	earnedMoney = quantity * inventories[ans - 1].getItemSellingPrice();
	cout << "################################";
	cout << "Earned amount : " << earnedMoney << "\n";
	cout << "################################";

	//increasing user's money after selling the item
	userMoney += earnedMoney;

	//decreasing user's item quantity after selling it successfully 
	inventories[ans - 1].setItemQuantity(inventories[ans - 1].getItemQuantity() - quantity);
	

}

void User::buyTheirWares() {
	int ans = 0;
	int quantity = 0;
	bool quantityChecker = false;
	float investedMoney = 0;


	cout << "#############################################################" << "\n";
	for (int i = 0; i < citiesLi.size();i++) {
		cout << "------------------------------------------------";
		cout << "city name : " << citiesLi[i]->getCityName() << "\n";
		cout << "##### Item \t\t" << "selling Price\n";
		for (int j = 0; j < citiesLi[i]->getInventories().size();j++) {
			cout << "##### " << j + 1 << ". " << citiesLi[i]->getInventories()[j].getItemName() << "\t\t\t" << citiesLi[i]->getInventories()[j].getItemSellingPrice() << "\n";

		}
		cout << "------------------------------------------------";
	}
	cout << "#############################################################" << "\n";
	cout << "Enter 0 to exit from buying menu : \n";
	//inventoriesListDisplay();
	cout << "Please enter the item number to buy item in " << currentCity->getCityName() <<" : \n";
	cin >> ans;
	if (ans == 0) {
		cout << "Thank you for visiting buying menu!";
		return;
	}

	do {

		cout << "Please enter the quantities of the " << currentCity->getInventories()[ans-1].getItemName() << " : \n";
		cin >> quantity;
		quantityChecker = false;
		if (quantity > currentCity->getInventories()[ans-1].getItemQuantity()) {
			cout << "########################################\n";
			cout << "Sorry, we don't have that much quantity \n";
			quantityChecker = true;
		}
	} while (quantityChecker);

	investedMoney = quantity * currentCity->getInventories()[ans-1].getItemSellingPrice();
	cout << "################################\n";
	cout << "Total cost : " << investedMoney << "\n";
	cout << "################################";

	//decreasing user's money after buying the item
	userMoney -= investedMoney;

	//increasing user's item quantity after buying it successfully
	int itemNumber = -1;
	for (int i = 0; i < inventories.size(); i++) {
		if (inventories[i].getItemName() == currentCity->getInventories()[ans - 1].getItemName()) {
			itemNumber = i;
			break;
		}
	}
	if (itemNumber == -1) {
		inventories.push_back(new Item(currentCity->getCityName(), currentCity->getInventories()[ans-1].getItemSellingPrice(), quantity));

	}

	inventories[itemNumber - 1].setItemQuantity(inventories[itemNumber - 1].getItemQuantity() - quantity);

}

void User::userAnsChecker(int a) {
	switch (a) {
		case 1: 
			sellTheirWares();
			break;
		case 2:
			buyTheirWares();
			break;
		case 3: 
			currentCity = nextCity;
			break;
	}
}

//for printing user menu
void User:: userMenu() {
	
	cout << "Hello " << name << "\nWelcome to User menu : \n";
	
	inventoriesListDisplay();

	cout << "User's total money : " << userMoney << "\n";
	cout << "User's current City name : " << currentCity->getCityName() << "\n";
	
	cout << "#############################################################" << "\n";

	int ans = 0;
	cout << "1. Sell their wares\n";
	cout << "2. Buy their wares\n";
	cout << "3. travel to a new city\n";
	cout << "Please enter the require option : \n";
	cin >> ans;
	userAnsChecker(ans);
	//cout << "User's next city name : " << nextCity->getCityName() << "\n";
				
}

//for randomly assigning the city to user


	
string User:: getName() {
	return name;
}
void User :: setName(string n) {
	name = n;
}
	
vector<Item> User::  getInventories() {
	return inventories;
}
	
void User :: setInventories(vector<Item> inv) {
	inventories = inv;
}
	

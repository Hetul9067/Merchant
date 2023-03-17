#include "City.h"
#include "Item.h"
#include<iostream>
#include<string>
#include<list>
#include<sstream>
#include<vector>



using namespace std;

City::City() {

}

City ::City(string name) {
	cityName = name;
}

void City::cityMenu() {


	cout << "###############################################################" << "\n";
	cout << "#####| Item\t\t|" << "Buying Price|\t\t|" << "Selling Price|\n";
	for (int i = 0; i < inventories.size();i++) {
		cout << "#####| " << inventories.at(i).getItemName() << "\t\t\t|" << inventories.at(i).getItemBuyingPrice()
			<< "|\t\t\t|" << inventories.at(i).getItemSellingPrice() << "|\n";


	}
	cout << "###############################################################" << "\n";
}

void City::sellsItem() {
	cout << "";


}

string City::getCityName() {
	return cityName;
}

void City::setCityName(string name) {
	cityName = name;
}

float City::getBuyingPrice() {
	return buyingPrice;
}

void City::setBuyingPrice(float price) {
	buyingPrice = price;
}

vector<Item> City::getInventories() {
	return inventories;
}

void City::setInventroies(vector<Item> inv) {
	
	inventories = inv;
	/*for (int i = 0; i < inventories.size();i++) {
		cout << "#####| " << inventories.at(i).getItemName() << "\t\t\t|" << inventories.at(i).getItemBuyingPrice()
			<< "|\t\t\t|" << inventories.at(i).getItemSellingPrice() << "|\n";


	}
	cout << "hello inventroies$$$";*/
}



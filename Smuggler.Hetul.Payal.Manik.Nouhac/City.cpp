#include "City.h"
#include "Item.h"
#include<iostream>
#include<string>
#include<list>
#include<sstream>
#include<vector>



using namespace std;

City ::City(string name) {
	cityName = name;
}

void City::cityMenu() {


	cout << "###############################" << "\n";
	cout << "##Item\t\t" << "Buying Price\t\t" << "Selling Price\n";
	for (int i = 0; i < inventories.size();i++) {
		cout << "#" << inventories.at(i).getItemName() << "\t\t\t" << inventories.at(i).getItemBuyingPrice()
			<< "\t\t\t" << inventories.at(i).getItemSellingPrice() << "\n";


	}
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
}



//class City {
//
//	private :
//		string cityName;
//		float buyingPrice;
//		float sellingPrice;
//		
//		vector<Item> inventories;
//
//	public :
//		City(string name) {
//			cityName = name;
//		}
//
//		void cityMenu() {
//			
//			
//			cout << "###############################" << "\n";
//				cout << "##Item\t\t" << "Buying Price\t\t" << "Selling Price\n";
//			for (int i = 0; i < inventories.size();i++) {
//				cout << "#" << inventories.at(i).getItemName() << "\t\t\t" << inventories.at(i).getItemBuyingPrice()
//					<< "\t\t\t" << inventories.at(i).getItemSellingPrice() << "\n";
//
//
//			}
//		}
//
//		void sellsItem() {
//			cout << "";
//
//
//		}
//
//		string getCityName() {
//			return cityName;
//		}
//		
//		void setCityName(string name) {
//			cityName = name;
//		}
//
//		float getBuyingPrice() {
//			return buyingPrice;
//		}
//
//		void setBuyingPrice(float price) {
//			buyingPrice = price;
//		}
//
//		vector<Item> getInventories() {
//			return inventories;
//		}
//
//		void setInventroies(vector<Item> inv) {
//			inventories = inv;
//		}
//		
//
//
//};
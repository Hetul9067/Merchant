#include "User.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

User::User(string n, string cityName) {
	name = n;
	currentCityName = cityName;
}

void User:: userMenu() {
	
	cout << "###############################" << "\n";
	cout << "##Item\t\t" << "Buying Price\t\t" << "Selling Price\n";
	for (int i = 0; i < inventories.size();i++) {
		cout << "#####" << inventories.at(i).getItemName() << "\t\t\t" << inventories[i].getItemBuyingPrice()
			<< "\t\t\t" << inventories.at(i).getItemSellingPrice() << "\n";
	
	
	}
	cout << "User's total money : " << userMoney << "\n";
	cout << "User's current City name : " << currentCityName << "\n";
	
				
}
void User:: sellTheirWares() {
	
}
	
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
	

//class User {
//
//	/*private :
//		string name;
//		float userMoney;
//		string currentCityName;
//		string nextCityName;
//
//		vector<Item> inventories;
//	*/
//	public :
//		User(string n, string cityName) {
//			name = n;
//			currentCityName = cityName;
//		}
//
//
//	public :
//		void userMenu() {
//
//			cout << "###############################" << "\n";
//			cout << "##Item\t\t" << "Buying Price\t\t" << "Selling Price\n";
//			for (int i = 0; i < inventories.size();i++) {
//				cout << "#" << inventories.at(i).getItemName() << "\t\t\t" << inventories[i].getItemBuyingPrice()
//					<< "\t\t\t" << inventories.at(i).getItemSellingPrice() << "\n";
//
//
//			}
//			cout << "User's total money : " << userMoney << "\n";
//			cout << "User's current City name : " << currentCityName << "\n";
//
//			
//		}
//		void sellTheirWares() {
//
//		}
//
//		string getName() {
//			return name;
//		}
//		void setName(string n) {
//			name = n;
//		}
//
//		vector<Item> getInventories() {
//			return inventories;
//		}
//
//		void setInventories(vector<Item> inv) {
//			inventories = inv;
//		}
//
//};
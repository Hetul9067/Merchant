
#include "Item.h"
#include <iostream>
#include <string>
#include <Random>
//#ifndef ITEM_CPP;
////#endif ITEM_CPP;
//#define Item_CPP
// 

using namespace std;

Item :: Item(string name, float bPrice, float quantity) {
	itemName = name;
	//itemBuyingPrice = bPrice;
	randomlySetBuyingPrice(bPrice);
	itemQuantity = quantity;

}

void Item::randomlySetBuyingPrice(float bPrice) {
	int maxPrice = bPrice * 1.20;
	srand(time(0));
	cout << "bPrice : " << maxPrice << "\n";
	itemBuyingPrice = (rand() % (maxPrice- (int) bPrice + 1))+bPrice;
	cout << "item buying Price : " << itemBuyingPrice <<"\n";

}
string Item::getItemName() {
	return itemName;
}
void Item:: setName(string name) {
	itemName = name;
}

float Item:: getItemBuyingPrice() {
	return itemBuyingPrice;
}
void Item:: setItemBuyingPrice(float price) {
	itemBuyingPrice = price;
}

float Item:: getItemSellingPrice() {
	return itemSellingPrice;
}
void Item:: setItemSellingPrice(float price) {
	itemSellingPrice = price;
}
float Item::getItemQuantity() {
	return itemQuantity;
}

void Item::setItemQuantity(float quantity) {
	itemQuantity = quantity;
	
}



//class Item {
//	private : 
//		string itemName;
//		float itemBuyingPrice;
//		float itemSellingPrice;
//		float itemQuantity;
//
//	public:
//		Item(string name, float bPrice, float sPrice, float quantity ) {
//			itemName = name;
//			itemBuyingPrice = bPrice;
//			itemSellingPrice = sPrice;
//			itemQuantity = quantity;
// 
//		}
//			
//		string getItemName() {
//			return itemName;
//		}
//		void setName(string name) {
//			itemName = name;
//		}
//
//		float getItemBuyingPrice() {
//			return itemBuyingPrice;
//		}
//		void setItemBuyingPrice(float price) {
//			itemBuyingPrice = price;
//		}
//
//		float getItemSellingPrice() {
//			return itemSellingPrice;
//		}
//		void setItemSellingPrice(float price) {
//			itemSellingPrice = price;
//		}
//		float getItemQuantity() {
//			return itemQuantity;
//		}
//
//		float setItemQuantity(float quantity) {
//			itemQuantity = quantity;
//		}
//
//
//	
//};
//
//#endif;
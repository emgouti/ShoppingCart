
#include <iostream>
#include "Item.h"


using namespace std;

Item::Item() {
	name = "";
	price = 0;
}

string Item::getName() {
	return name;
}

double Item::getPrice()
{
	return price;
}

void Item::setPrice(double y) {
	if (y <= 0) //check new price
	{
		cout << "Price needs to be great than 0." << endl;
	}
	else {
		price = y;
	}


}

Item Item::operator+(double x) {
	Item temp = *this; //exact copy
	temp.setPrice(price + x); //same as checking price + x >= 0

	return temp;
}

Item Item::operator-(double x) {
	Item temp = *this; //exact copy
	temp.setPrice(price - x);
	
	return temp;
}

void Item::setName(string s) {
	name = s;
}

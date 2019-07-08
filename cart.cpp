#include "cart.h"

Cart::Cart()
{
	max_item = 50;
	item = new Item[max_item];
	quantityItem = new int[max_item];
	total = 0;
	numItems = 0;
}

Cart::Cart(int size)
{
	max_item = size;
	item = new Item[max_item];
	quantityItem = new int[max_item];
	total = 0;
	numItems = 0;
}

Cart::~Cart()
{
	delete[] item, quantityItem;
}

Cart Cart::operator=(Cart)
{
	return *this;
}

void Cart::addItem(Item newItem, int itemQuantities)
{
	if (itemQuantities <= 0)
	{
		cout << "Quantity must be greater than 0." << endl;
		return;
	}
	bool check = false;

	//go thru list to see if item is found
	for (int i = 0; i < numItems; i++)
	{
		//item is found
		if (newItem.getName() == item[i].getName() && newItem.getPrice() == item[i].getPrice()){
			check = true;

			//add quantity
		}
	}

	//item not found
	if (!check)
	{
		/increase numItems and add to cart IF quantity > 0 
	}


}

void Cart::removeItem(Item newItem, int itemQuantities)
{
	if (itemQuantities <= 0)
	{
		cout << "message" << endl;
		return;
	}
	bool check = false;

	//go thru list to see if item is found
	for (int i = 0; i < numItems; i++)
	{
		//item is found
		if (newItem.getName() == item[i].getName() && newItem.getPrice() == item[i].getPrice()) {
			check = true;
			//remove quantity, cant go below 0
			//if it is 0, remove from array
			//for(int j = i; j < numItems - 1; j++) {shift everything up by 1}
			//numItems--; //decrement unique items in cart
		}
	}

	//item not found
	if (!check)
	{
		cout << "message" << endl;
	}



}

void Cart::printCart()
{
}

void Cart::increasePrice(Item s, double g)
{
}

void Cart::decreasePrice(Item s, double g)
{
}

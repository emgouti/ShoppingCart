#include <iostream>
#include "Item.h"
#include "Cart.h"

using namespace std;


int main()
{
	//Initial cart content
	int ITEMLIST_SIZE = 10;
	int cartSize = 0, i = 0;

	Item itemList[ITEMLIST_SIZE];
	string itemNames[] = { "Notebook", "Bat", "Ball", "Pencil", "Ruler", "Pen", "Box","Stapler", "Folder", "Glue" };
	double itemPrices[] = { 1.00, 4.00, 3.50, 0.99, 1.99, 0.75, 3.00, 6.49, 2.00, 0.69 };
	for (i = 0; i<ITEMLIST_SIZE; i++) {
		Item item;
		item.setName(itemNames[i]);
		item.setPrice(itemPrices[i]);

		itemList[i] = item;
	}

	int itemQuantities[] = { 5, 1, 1, 12, 2, 6, 1, 1, 5, 2 };

	//Creating a cart object of size 5 and filling it with initial content,
	//first 5 items from list
	cartSize = 5;
	cout << "Creating a cart of size: " << cartSize << endl;
	Cart cart(cartSize);
	cout << "Adding " << cartSize << " items to the cart" << endl;
	for (i = 0; i<cartSize; i++) {
		cart.addItem(itemList[i], itemQuantities[i]);
	}

	cout << "Printing cart " << endl;
	cart.printCart();

	//Increasing quantity of one item already in cart
	Item newItem;
	newItem.setName(itemNames[2]);
	newItem.setPrice(itemPrices[2]);
	cout << "Adding one item already in the cart " << newItem.getName() << ", with additional quantity: " << itemQuantities[2] << endl;
	cart.addItem(newItem, itemQuantities[2]);

	//Adding a new item to the cart. NOTE: this operation should fail,
	//because the cart is already full
	newItem.setName(itemNames[5]);
	newItem.setPrice(itemPrices[5]);
	cout << "Adding new item " << newItem.getName() << endl;
	cart.addItem(newItem, itemQuantities[5]);

	cout << "Printing cart again" << endl;
	cart.printCart();

	//Eliminating item from cart
	Item keyItem;
	keyItem.setName(itemNames[2]);
	keyItem.setPrice(itemPrices[2]);
	cout << "Removing item " << keyItem.getName() << endl;
	cart.removeItem(keyItem);

	cout << "Printing cart again" << endl;
	cart.printCart();

	//Increasing price of one item in the cart
	Item changeItem;
	changeItem.setName(itemNames[3]);
	changeItem.setPrice(itemPrices[3]);
	double priceIncrease = 2.99;
	cout << "Increasing item " << changeItem.getName() << " old price: " << itemPrices[3] << " price increase:" << priceIncrease << endl;
	cart.increasePrice(changeItem, priceIncrease);
	cout << "Printing cart with changed price" << endl;
	cart.printCart();

	//Decreasing price of one item in the cart
	changeItem.setName(itemNames[3]);
	changeItem.setPrice(itemPrices[3]);
	double priceDecrease = 1.99;
	cout << "Decreasing item " << changeItem.getName() << " old price: " << itemPrices[3] << " price decrease:" << priceDecrease << endl;
	cart.decreasePrice(changeItem, priceDecrease);
	cout << "Printing cart with changed price" << endl;
	cart.printCart();

	//Creating copy of cart using copy constructor
	cout << "Creating a new cart using copy constructor" << endl;
	Cart newCart(cart);
	cout << "Printing NEW cart" << endl;
	newCart.printCart();
	newItem.setName(itemNames[7]);
	newItem.setPrice(itemPrices[7]);
	cout << "Adding new item " << newItem.getName() << endl;
	newCart.addItem(newItem, itemQuantities[7]);
	cout << "Printing NEW cart again" << endl;
	newCart.printCart();

	cout << "Printing OLD cart to check the difference" << endl;
	cart.printCart();


	return 0;
}
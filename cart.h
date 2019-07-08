#ifndef CART_H

#define CART_H



#include "Item.h"



class Cart

{

	public:

		Cart();

		Cart(int size);

		~Cart();

		Cart(const Cart& cartObj);

		void addItem(Item addItem, int itemQuantity);

		void removeItem(Item removeItem);

		void printCart() const;

		void increasePrice(Item itemToIncrease, double addPrice);

		void decreasePrice(Item itemToDecrease, double decreasePrice);

		friend ostream &operator<<(ostream &out, const Cart cart);

	private:

		int max_item;

		Item *item;

		int  *quantityItem;

		int total;

};



#endif // !CART_H
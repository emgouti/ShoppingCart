#ifndef ITEM_H

#define ITEM_H

#include <string>

using namespace std;

class Item

{

	public:

		Item();

		void setName(string itemName);

		void setPrice(double itemPrice);

		string getName() const;

		double getPrice() const;

		Item operator+(double x);

		Item operator-(double x);

	private:

		string name;

		double price;

};



#endif // !ITEM_H
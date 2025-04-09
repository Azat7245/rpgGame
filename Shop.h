#ifndef SHOP_H
#define SHOP_H

#include "Item.h"
#include "Player.h"
#include <vector>
using namespace std;

class Shop {
private:
	vector<Item> stock;

public:
	Shop();
	void displayItems();
	void buyItem(Player& player);
};

#endif
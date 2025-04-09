#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include "Item.h"
#include <vector>

using namespace std;

class Player : public Character {
private:
	int level;
	int experience;
	int gold;
	vector<Item> inventory;

public:
	Player(string n, int h, int a);

	void getExperience(int xp);
	void levelUp

	void heal();
	void showInventary();
	void useItem();
	void addItem();

	int getGold() const;
	void addGold(int amount);
	bool spendGold(int amount)

	void attack(Character& target) override;
};

#endif
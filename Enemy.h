#ifndef ENEMY_H
#define ENEMY_H

#include "Character.h"

using namespace std;

class Enemy : public Character {
public:
	Enemy(string n, int h, int a);

	void attack(Character& target) override;
};

#endif
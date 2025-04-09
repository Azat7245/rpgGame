#ifndef PLAYER_H
#define PLAYER_H

#include <Character.h>

using namespace std;

class Player : public Character {
public:
	Player(string n, int h, int a);

	void attack(Character& target) override;
};

#endif
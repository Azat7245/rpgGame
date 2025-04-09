#include "Character.h"
using namespace std;

Character::Character(string n, int h, int a) : name(n), health(h), attackPower(a);

Character::~Character() {}

void Character::takeDamage(int damage) {
	health -= damage;

	if (health < 0) {
		health = 0;
	}
}

bool Character::isAlive() const {
	return health > 0;
}

string Character::getName() {
	return name;
}

int Character::getHealth() {
	return health;
}
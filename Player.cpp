#include "Player.h"
using namespace std;

Player::Player(string n, int h, int a) : Character(n, h, a) {}

void Player::attack(Character& target) {
	cout << name << " атакует " << target.getName() << " с " << attackPower << " урона " << endl;
	target.takeDamage(attackPower);
}
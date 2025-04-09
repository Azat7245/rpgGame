#include "Player.h"
using namespace std;

Player::Player(string n, int h, int a) : Character(n, h, a) {}

void Player::attack(Character& target) {
	cout << name << " ������� " << target.getName() << " � " << attackPower << " ����� " << endl;
	target.takeDamage(attackPower);
}
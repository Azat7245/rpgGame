#include "Enemy.h"
using namespace std;

Enemy::Enemy(string n, int h, int a) : Character(n, h, a) {}

void Enemy::attack(Character& target) {
	cout << name << " атакует " << target.getName() << " с " << attackPower << " урона " << endl;
	target.takeDamage(attackPower);
}
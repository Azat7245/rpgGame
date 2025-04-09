#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character {
protected:
	string name;
	int health;
	int attackPower;

public:
	// ����������� ������ Character
	Character(strinng n, int h, int a);

	// ���������� ������ 
	virtual ~Character();

	// ����� ����������� ����� 
	virtual void attack(Character& target) = 0;

	void takeDamage(int damage);

	bool isAlive() const;

	string getName() const;
	int getHealth() const;
};

#endif
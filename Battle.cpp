#include <iostream>
#include <Battle.h>
using namespace std;

void startBattle(Player& player, Enemy& enemy) {
	cout << "���������� ����� ����� " << player.getName() << " � " << enemy.getName() << endl;

	while (player.isAlive() && enemy.isAlive()) {
		player.attack(enemy);
		if (!enemy.isAlive()) {
			cout << enemy.getName() << " �������" << endl;
			break;
		}

		enemy.attack(enemy);
		if (!player.isAlive()) {
			cout << player.getName() << " �������" << endl;
			break;
		}
	}
}
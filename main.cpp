#include "Player.h"
#include "Enemy.h"
#include "Battle.h"

int main() {
	Player player("�����", 80, 6);
	Enemy enemy("�������", 50, 16);

	startBattle(player, enemy);

	return 0;
}
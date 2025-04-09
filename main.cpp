#include "Player.h"
#include "Enemy.h"
#include "Battle.h"

int main() {
	Player player("Ислам", 80, 6);
	Enemy enemy("Никитос", 50, 16);

	startBattle(player, enemy);

	return 0;
}
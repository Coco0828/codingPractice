#include <iostream>
#include <string>
using namespace std;

struct player {
	bool isShocked;
	string name, items[10];
	int health, damageTaken, nextPoorGuy;
} players[10001];

istream& operator>>(istream &inputStream, player &target) {
	inputStream >> target.name >> target.health >> target.damageTaken;
	for (int i = 0; i < target.health; i ++) inputStream >> target.items[i];
	inputStream >> target.nextPoorGuy;
	target.isShocked = false;
	return inputStream;
}

int main() {
	int amount, start;
	while (cin >> amount >> start) {
		for (int i = 1; i <= amount; i ++) cin >> players[i];
		while (!players[start].isShocked) {
			players[start].isShocked = true;
			cout << players[start].name;
			players[start].health -= players[start].damageTaken;
			if (players[start].health <= 0) cout << " dead.\n";
			else {
				cout << " " << players[start].health;
				for (int i = 0; i < players[start].health; ++i)
					cout << " " << players[start].items[i];
				cout << endl;
			}
			start = players[start].nextPoorGuy;
		}
	}
}

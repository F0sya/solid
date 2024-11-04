#ifndef O_H
#define O_H
#include "lib.h"

/*
* Open/Closed - каже нам про те, що класи,модулі,функції мають бути відкриті для розширення і закриті для змін.
*/

//Поганий приклад:

/* Цей приклад не задовільняє прицип Open/Closed через те, що якщо буде створений об'єкт з іншою назвою,
* то прийдеться міняти саму функцію, а це якраз і суперечить цьому принципу.
*/

class Game {
	string name;
public:
	Game(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

vector<Game> games = { Game("RDR 2"),Game("Valorant"),Game("Half life 2") };

void printGameStudio(vector<Game> games) {
	for (auto& i : games) {
		if (i.getName() == "RDR 2") {
			cout << "Rockstar Games";
		}
		else if (i.getName() == "Valorant") {
			cout << "Riot Games";
		}
		else if (i.getName() == "Half life 2") {
			cout << "Valve";
		}
	}
}




//Гарний приклад:
class Game1 {
	string name;
public:
	Game1(string name) {
		this->name = name;
	}
	virtual string getStudio() = 0;
};

class RDR_2 : public Game1 {
	
	string getStudio() override {
		return "Rockstar Games";
	}
};

class Valorant : public Game1 {

	string getStudio() override {
		return "Riot Games";
	}
};
class Half_life_2 : public Game1 {

	string getStudio() override {
		return "Valve";
	}
};

#endif // !O_H

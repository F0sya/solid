#ifndef S_H
#define S_H
#include "lib.h"

/*
* Single responsibility - відповідає за те, щоб у кожного класу була своя зона відповідальності,
* тобто кожен клас має мати свою ціль, а не одночасно записувати,зберігати у файл і виводити.
* Інтерпретуючи інакше можна сказати, що це принцип який забороняє створювати брєдові функції класу.
* Наприклад, клас олівець може писати, стирати, але не може чистити картоплю.
*/


//Поганий приклад:
class Game {
	string name;
public:
	Game(string name) {
		this->name = name;
	}
	string getName(string name) {
		return name;
	}
	void saveInFile() {
		//saveInFile code
	}
	void printInfo() {
		//printInfo code
	}
};
//Гарний приклад:
class Game {
	string name;
public:
	Game(string name) {
		this->name = name;
	}
	string getName(string name) {
		return name;
	}
};
class GameSaveManager {
	Game* name;
public:
	GameSaveManager(Game* name) {
		this->name = name;
	}
	void saveInFile() {
		//saveInFile code
	}
};
class GamePrint {
	Game* name;
public:
	GamePrint(Game* name) {
		this->name = name;
	}
	void printInfo() {
		//printInfo code
	}
};

#endif // !1

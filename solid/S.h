#ifndef S_H
#define S_H
#include "lib.h"

/*
* Single responsibility - ������� �� ��, ��� � ������� ����� ���� ���� ���� �������������,
* ����� ����� ���� �� ���� ���� ����, � �� ��������� ����������,�������� � ���� � ��������.
* ������������� ������ ����� �������, �� �� ������� ���� ��������� ���������� ����� ������� �����.
* ���������, ���� ������ ���� ������, �������, ��� �� ���� ������� ��������.
*/


//������� �������:
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
//������ �������:
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

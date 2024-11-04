#ifndef I_H
#define I_H
#include "lib.h"

/*
* ������� ���������� ������� ˳���� - �� ������� �� ���� ����� ������� ���� �� ���� ����� ���������� � ��� �������,
* �� � �� ����������� ����.
*/

class CoffeeMachine abstract {
public:
	CoffeeMachine() = default;
	virtual void MakeCoffee() = 0;
};

class NewCoffeeMachine : public CoffeeMachine {
public:
	virtual void MakeCoffee() override {
		cout << "Here is your coffee from new coffee machine" << endl;
	}
};


class OldCoffeeMachine : public CoffeeMachine {
public:
	virtual void MakeCoffee() override {
		cout << "Here is your coffee from old coffee machine" << endl;
	}
};



#endif // !I_H

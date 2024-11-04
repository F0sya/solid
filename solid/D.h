#ifndef D_H
#define D_H
#include "lib.h"

/*
* Dependency Inversion - принцип, що стверджує об'єктом залежності має бути абстракція, а не щось конкретне
*/

class Device {
public:
	virtual void connect() = 0;
};
class Mouse : public Device {
public:
	void connect() override {
		cout << "Mouse is connected" << endl;
	}
};
class Headphone : public Device {
public:
	void connect() override {
		cout << "Headphone is connected" << endl;
	}
};

class Computer {
	Device* device;
public:
	Computer(Device* device) {
		this->device = device;
	}
	void connectDevice() {
		device->connect();
	}
};
#endif // !D_H

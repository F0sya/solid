#ifndef I_H
#define I_H
#include "lib.h"

/*
* Interface segregation - принцип який каже про те, що користувач не має залежати від інтерфейсу, що він не використовує
*/

//Поганий приклад:
class GeometryShape {
public:
	virtual void drawCircle() = 0;
	virtual void drawRect() = 0;
	virtual void drawSquare() = 0;
};

class Circle : public GeometryShape {
	void drawCircle() override{
		cout << "Circle is drawen";
	}
	void drawRect() override {
		cout << "Rectangle is drawen";
	}
	void drawSquare() override {
		cout << "Square is drawen";
	}

};

class Square: public GeometryShape {
	void drawCircle() override {
		cout << "Circle is drawen";
	}
	void drawRect() override {
		cout << "Rectangle is drawen";
	}
	void drawSquare() override {
		cout << "Square is drawen";
	}

};
class Rect : public GeometryShape {
	void drawCircle() override {
		cout << "Circle is drawen";
	}
	void drawRect() override {
		cout << "Rectangle is drawen";
	}
	void drawSquare() override {
		cout << "Square is drawen";
	}

};

//Гарний приклад:
class MyCircle {
public:
	virtual void drawCircle() = 0;
};
class MyRect {
public:
	virtual void drawRect() = 0;
};
class MySquare {
public:
	virtual void drawSquare() = 0;
};

class Circle : public MyCircle {
	void drawCircle() override {
		cout << "Circle is drawen";
	}
};
class Rect : public MyRect {
	void drawRect() override {
		cout << "Rect is drawen";
	}
};
class Square : public MySquare {
	void drawSquare() override {
		cout << "Square is drawen";
	}
};
#endif // !I_H

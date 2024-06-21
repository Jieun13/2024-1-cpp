#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;

class Shape {
	Shape* link;
protected:
	virtual void draw() = 0;
public:
	Shape() { 
		link = NULL; 
	}
	virtual ~Shape() {  }
	Shape* add(Shape* p) {
		link = p;
		return p;
	}
	void make() {
		draw();
	}
	Shape* getNext() { 
		return link; 
	}
};


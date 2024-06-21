#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;

class Line : public Shape {
protected :
	void draw() {
		cout << "Line" << endl;
	}
};


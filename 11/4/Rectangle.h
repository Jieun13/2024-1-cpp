#pragma once
#include<iostream>
#include"Shape.h"
using namespace std;

class Rectangle : public Shape{
protected :
	void draw() {
		cout << "Rectangle" << endl;
	}
};


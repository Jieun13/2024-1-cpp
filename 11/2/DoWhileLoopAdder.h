#pragma once
#include<iostream>
#include "LoopAdder.h"
using namespace std;

class DoWhileLoopAdder : public LoopAdder {
	;
public : 
	DoWhileLoopAdder(string str) : LoopAdder(str) { }
	int calculate() {
		int sum = 0;
		int x = getX();
		int y = getY();
		do {
			sum += x;
			x++;
		} while (x <= y);
		return sum;
	}
};
#pragma once
#include<iostream>
#include "LoopAdder.h"
using namespace std;

class WhileLoopAdder : public LoopAdder {
	;
public : 
	WhileLoopAdder(string str) : LoopAdder(str) { }
	int calculate() {
		int sum = 0;
		int x = getX();
		int y = getY();
		while (true) {
			sum += x;
			x++;
			if (x > y) break;
		}
		return sum;
	}
};
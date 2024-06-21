#include<iostream>
#include "Calculator.h"

Add::Add() {
	a = 0; b = 0;
	result = 0;
}

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	result = a + b;
	return result;
}

Sub::Sub() {
	a = 0; b = 0;
	result = 0;
}
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	result = a - b;
	return result;
}

Mul :: Mul() {
	a = 0; b = 0;
	result = 0;
}
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	result = a * b;
	return result;
}

Div :: Div() {
		a = 0; b = 0;
		result = 0;
	}
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	result = a / b;
	return result;
}
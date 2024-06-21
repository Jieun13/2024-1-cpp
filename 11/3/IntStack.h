#pragma once
#include<iostream>
#include"AbstractStack.h"
using namespace std;

class IntStack : public AbstractStack {
	int top;
	int* p;
	int capacity;
public : 
	IntStack(int size = 10) {
		this->capacity = size;
		top = -1;
		p = new int[size];
	}
	~IntStack() {
		delete [] p;
	}
	bool push(int n) { // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
		if (top == capacity - 1) {
			return false;
		}
		else {
			p[++top] = n;
			return true;
		}
	}
	bool pop(int& n) { // 스택에서 팝한 정수를 n에 저장하고 스택이 empty이면 false 리턴
		if (top == -1) {
			return false;
		}
		else {
			n = p[top--];
			return true;
		}
	}
	int size() { // 현재 스택에 저장된 정수의 개수 리턴
		return top + 1;
	}
};
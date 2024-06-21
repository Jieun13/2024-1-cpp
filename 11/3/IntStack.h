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
	bool push(int n) { // ���ÿ� n�� Ǫ���Ѵ�. ������ full�̸� false ����
		if (top == capacity - 1) {
			return false;
		}
		else {
			p[++top] = n;
			return true;
		}
	}
	bool pop(int& n) { // ���ÿ��� ���� ������ n�� �����ϰ� ������ empty�̸� false ����
		if (top == -1) {
			return false;
		}
		else {
			n = p[top--];
			return true;
		}
	}
	int size() { // ���� ���ÿ� ����� ������ ���� ����
		return top + 1;
	}
};
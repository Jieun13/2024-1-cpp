#pragma once
#include<iostream>
using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // 스택에 n을 푸시한다. 스택이 full이면 false 리턴
	virtual bool pop(int& n) = 0; // 스택에서 팝한 정수를 n에 저장하고 스택이 empty이면 false 리턴
	virtual int size() = 0; // 현재 스택에 저장된 정수의 개수 리턴
};
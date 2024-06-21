#include<iostream>

using namespace std;

class Stack {
	int* p;
	int top;
public : 
	Stack() {
		top = -1;
		p = new int[10];
	}
	~Stack() {
		delete[] p;
	}
	bool operator !() {
		if (top == -1) return true;
		else return false;
	}
	Stack& operator << (int x) {
		p[++top] = x;
		return *this;
	}
	void operator >> (int& x) {
		x = p[top--];
	}
};

int main() {
	Stack stack;
	stack << 3 << 5 << 10; // 3, 5, 10을 순서대로 푸시
	while (true) {
		if (!stack) break; // 스택 empty 
		int x;
		stack >> x; // 스택의 탑에 있는 정수 팝
		cout << x << ' ';
	}
	cout << endl;
}
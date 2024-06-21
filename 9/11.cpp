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
	stack << 3 << 5 << 10; // 3, 5, 10�� ������� Ǫ��
	while (true) {
		if (!stack) break; // ���� empty 
		int x;
		stack >> x; // ������ ž�� �ִ� ���� ��
		cout << x << ' ';
	}
	cout << endl;
}
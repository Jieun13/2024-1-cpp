#include<iostream>
#include"Calculator.h"

using namespace std;

int main() {
	Add a; Sub s; Mul m; Div d;

	while (true) {
		int x = 0, y = 0;
		char c = '\0';
		cout << "두 정수와 연산자를 순서대로 입력하세요 >> ";
		cin >> x >> y >> c;

		switch (c) {
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;

		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;

		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;

		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;

		default:
			cout << "순서대로 입력해주세요." << endl;
			break;
		}

		if ((c != '+') && (c != '-') && (c != '*') && (c != '/')){
			break;
		}
	}
}
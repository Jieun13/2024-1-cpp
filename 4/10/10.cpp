#include<iostream>
#include"Calculator.h"

using namespace std;

int main() {
	Add a; Sub s; Mul m; Div d;

	while (true) {
		int x = 0, y = 0;
		char c = '\0';
		cout << "�� ������ �����ڸ� ������� �Է��ϼ��� >> ";
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
			cout << "������� �Է����ּ���." << endl;
			break;
		}

		if ((c != '+') && (c != '-') && (c != '*') && (c != '/')){
			break;
		}
	}
}
#include<iostream>

using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) {
		return true;
	}
	else {
		if (a >= b) big = a;
		else big = b;
		return false;
	}
}

int main() {
	int a, b;
	int big = 0;

	cout << "a, b�� �Է��ϼ��� >> ";
	cin >> a >> b;

	bool isSame = bigger(a, b, big);

	if (isSame) {
		cout << "�� ���� ũ�Ⱑ �����ϴ�." << endl;
	}
	else {
		cout << "�� ū ���� " << big << endl;
	}
}
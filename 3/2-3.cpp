#include<iostream>

using namespace std;

int main() {
	int iNum1, iNum2;
	int max = 0;

	cout << "�� ���� �Է��ϼ��� : ";
	cin >> iNum1 >> iNum2;

	if (iNum1 > iNum2) {
		max = iNum1;
	}
	else {
		max = iNum2;
	}

	cout << "ū �� = " << max;

	return 0;
}
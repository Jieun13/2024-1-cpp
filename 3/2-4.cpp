#include<iostream>

using namespace std;

int main() {
	double num;
	double max = 0;

	cout << "5���� �Ǽ��� �Է��϶� >> ";

	for (int i = 0; i < 5; i++) {

		cin >> num;
		if (num > max) {
			max = num;
		}
	}

	cout << "���� ū �� : " << max;
}
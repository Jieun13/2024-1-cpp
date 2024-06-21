#include<iostream>

using namespace std;

int main() {
	int iNum1, iNum2;
	int max = 0;

	cout << "두 수를 입력하세요 : ";
	cin >> iNum1 >> iNum2;

	if (iNum1 > iNum2) {
		max = iNum1;
	}
	else {
		max = iNum2;
	}

	cout << "큰 수 = " << max;

	return 0;
}
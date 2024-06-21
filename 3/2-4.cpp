#include<iostream>

using namespace std;

int main() {
	double num;
	double max = 0;

	cout << "5개의 실수를 입력하라 >> ";

	for (int i = 0; i < 5; i++) {

		cin >> num;
		if (num > max) {
			max = num;
		}
	}

	cout << "제일 큰 수 : " << max;
}
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

	cout << "a, b를 입력하세요 >> ";
	cin >> a >> b;

	bool isSame = bigger(a, b, big);

	if (isSame) {
		cout << "두 수의 크기가 같습니다." << endl;
	}
	else {
		cout << "더 큰 수는 " << big << endl;
	}
}
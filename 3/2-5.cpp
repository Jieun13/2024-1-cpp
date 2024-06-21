#include<iostream>

using namespace std;

int main() {
	char cList[100];
	int cnt = 0;

	cin.getline(cList, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (cList[i] == 'x') {
			cnt++;
		}
	}
	cout << "x의 개수는 " << cnt << endl;

	return 0;
}
#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char cPass[20];

	while (true) {
		cout << "종료하려면 yes를 입력하세요 >> ";
		cin.getline(cPass, 20, '\n');
		if (strcmp(cPass, "yes") == 0) break;
	}
	cout << "종료합니다..." << endl;

	return 0;
}
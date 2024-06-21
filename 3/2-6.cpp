#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str1[100];
	char str2[100];

	cout << "새 암호를 입력하세요 >> ";
	cin.getline(str1, 100, '\n');

	cout << "다시 한 번 새 암호를 입력하세요 >> ";
	cin.getline(str2, 100, '\n');

	if (strcmp(str1, str2) == 0) {
		cout << "같습니다." << endl;
	}
	else {
		cout << "같지 않습니다." << endl;
	}
}
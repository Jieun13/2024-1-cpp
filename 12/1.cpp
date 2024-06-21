#include<iostream>

using namespace std;

template <class T>

bool equalArrays(T arr1[], T arr2[], int size) {
	bool bFlag = true;
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i]) bFlag = false;
	}
	return bFlag;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	cout << "배열 x와 y는 ";
	if (equalArrays(x, y, 5)) cout << "같다" << endl; // 배열 x, y가 같으므로 "같다" 출력
	else cout << "다르다" << endl;

	int z[] = { 0, 1, 10, 100, 1000 };

	cout << "배열 x와 z는 ";
	if (equalArrays(x, z, 5)) cout << "같다" << endl; // 배열 x, y가 같으므로 "같다" 출력
	else cout << "다르다" << endl;

	char c[] = { 'a', 'b', 'c', 'd', 'e' };
	char d[] = { 'a', 'b', 'c', 'd', 'e' };

	cout << "배열 c와 d는 ";
	if (equalArrays(c, d, 5)) cout << "같다" << endl; // 배열 x, y가 같으므로 "같다" 출력
	else cout << "다르다" << endl;
}
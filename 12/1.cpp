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
	cout << "�迭 x�� y�� ";
	if (equalArrays(x, y, 5)) cout << "����" << endl; // �迭 x, y�� �����Ƿ� "����" ���
	else cout << "�ٸ���" << endl;

	int z[] = { 0, 1, 10, 100, 1000 };

	cout << "�迭 x�� z�� ";
	if (equalArrays(x, z, 5)) cout << "����" << endl; // �迭 x, y�� �����Ƿ� "����" ���
	else cout << "�ٸ���" << endl;

	char c[] = { 'a', 'b', 'c', 'd', 'e' };
	char d[] = { 'a', 'b', 'c', 'd', 'e' };

	cout << "�迭 c�� d�� ";
	if (equalArrays(c, d, 5)) cout << "����" << endl; // �迭 x, y�� �����Ƿ� "����" ���
	else cout << "�ٸ���" << endl;
}
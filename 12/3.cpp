#include<iostream>
#define SIZE 30

using namespace std;

template <class T>

T* remove(T src[], int sizeSrc, T minus[], int sizeMinus, int& retSize) {
	int size = sizeSrc;
	int cnt = 0;
	int isPass[SIZE] = { 0, };

	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				size--;
				isPass[i] = 1;
			}
		}
	}
	T *pRes = new T[size];

	for (int i = 0; i < sizeSrc; i++) {
		if (isPass[i] == 0) {
			pRes[cnt++] = src[i];
		}
	}

	retSize = cnt - 1;
	return pRes;
}

int main() {
	int list[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int minus[] = { 2, 3, 5, 7};

	char c[] = {'j', 'e', 'o', 'n', 'g', 'h', 'a', 'n'};
	char m[] = {'a', 'g'};

	cout << "초기 배열 : ";
	cout << "{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << endl;
	cout << "소거할 숫자 배열 : ";
	cout << "{ 2, 3, 5, 7}" << endl;

	int size;
	int *result = remove(list, 10, minus, 4, size);

	cout << "소거된 배열 출력 : {";
	for (int i = 0; i < size; i++) {
		if (i == size - 1) cout << result[i];
		else cout << result[i] << ", ";
	}
	cout << "}" << endl;
	cout << endl;

	cout << "초기 배열 : ";
	cout << "{j, e, o, n, g, h, a, n}" << endl;
	cout << "소거할 문자 배열 : ";
	cout << "{a, g}" << endl;

	char* result2 = remove(c, 8, m, 2, size);

	cout << "소거된 배열 출력 : {";
	for (int i = 0; i < size; i++) {
		if (i == size - 1) cout << result2[i];
		else cout << result2[i] << ", ";
	}
	cout << "}" << endl;
}
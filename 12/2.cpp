#include<iostream>

using namespace std;

template <class T>

bool search(T a, T arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == a) return true;
	}
	return false;
}

int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	if (search(100, x, 5)) cout << "100�� �迭 x�� ���ԵǾ� �ִ�" << endl; 
	else cout << "100�� �迭 x�� ���ԵǾ� ���� �ʴ�" << endl;

	char c[] = { 'h', 'e', 'l', 'l', 'o'};
	if (search('k', c, 5)) cout << "k�� �迭 c�� ���ԵǾ� �ִ�" << endl; 
	else cout << "k�� �迭 c�� ���ԵǾ� ���� �ʴ�" << endl;
}
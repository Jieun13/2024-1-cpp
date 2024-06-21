#include<iostream>

using namespace std;

class Matrix {
	int arr[4];
public : 
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
	}
	void show() {
		cout << "Matrix = {" << arr[0] << ',' << arr[1] << ',' << arr[2] << ',' << arr[3] << '}' << endl;
	}
	Matrix operator + (Matrix b) {
		Matrix res;
		for (int i = 0; i < 4; i++) {
			res.arr[i] = arr[i] + b.arr[i];
		}
		return res;
	}
	Matrix& operator += (Matrix b) {
		for (int i = 0; i < 4; i++) {
			arr[i] += b.arr[i];
		}
		return *this;
	}
	bool operator == (Matrix b) {
		for (int i = 0; i < 4; i++) {
			if (arr[i] != b.arr[i]) return false;
		}
		return true;
	}
};

int main() {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();
	if (a == c) {
		cout << "a and c are the same" << endl;
	}
}
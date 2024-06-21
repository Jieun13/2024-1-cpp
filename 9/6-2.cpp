#include<iostream>

using namespace std;

Class Matrix;
Matrix operator + (Matrix a, Matrix b);
void operator += (Matrix &a, Matrix &b);
bool operator == (Matrix a, Matrix b);

class Matrix {
	int arr[4];
public:
	Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
	}
	void show() {
		cout << "Matrix = {" << arr[0] << ',' << arr[1] << ',' << arr[2] << ',' << arr[3] << '}' << endl;
	}
	friend Matrix operator + (Matrix a, Matrix b);
	friend void operator += (Matrix &a, Matrix &b);
	friend bool operator == (Matrix a, Matrix b);
};

Matrix operator + (Matrix a, Matrix b) {
	Matrix res;
	for (int i = 0; i < 4; i++) {
		res.arr[i] = a.arr[i] + b.arr[i];
	}
	return res;
}
void operator += (Matrix &a, Matrix &b) {
	for (int i = 0; i < 4; i++) {
		a.arr[i] += b.arr[i];
	}
}
bool operator == (Matrix a, Matrix b) {
	for (int i = 0; i < 4; i++) {
		if (a.arr[i] != b.arr[i]) return false;
	}
	return true;
}

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
#include<iostream>

using namespace std;

class Matrix;

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
	friend void operator >> (Matrix m, int x[]);
	friend void operator << (Matrix &m, int x[]);
};

void operator >> (Matrix m, int x[]) {
	for (int i = 0; i < 4; i++) {
		x[i] = m.arr[i];
	}
}

void operator << (Matrix& m, int x[]) {
	for (int i = 0; i < 4; i++) {
		m.arr[i] = x[i];
	}
}

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) {
		cout << x[i] << ' ';
	}
	cout << endl;
	b.show();
}
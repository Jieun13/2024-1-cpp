#include<iostream>

using namespace std;
int* copy(int* src, int size) {
	int* p = NULL;

	if (size < 0) {
		throw -1;
	}
	else if (size > 100) {
		throw - 2;
	}
	p = new int[size]; 
	if (p == NULL) {
		throw - 3;
	}
	else if (src == NULL) {
		throw - 4;
		delete[] p;
	}
	else { // 정상적으로 배열을 복사하는 부분
		for (int n = 0; n < size; n++) {
			p[n] = src[n];
		}
		return p;
	}
}
int main() {
	int x[] = { 1,2,3 };

	try {
		int* p = copy(x, 3);
		for (int i = 0; i < 3; i++) cout << p[i] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (int err) {
		cout << "error code " << err << endl;
	}
	
}
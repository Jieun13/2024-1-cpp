#include<iostream>

using namespace std;

class MyVector {
	int* mem;
	int size;
public:
	MyVector(int n = 100, int val = 1){
		mem = new int[n];
		size = n;
		for (int i = 0; i < size; i++) {
			mem[i] = val;
		}
	}
	~MyVector() { 
		delete[] mem; 
	}
	int getVector(int x = 0){
		return mem[x];
	}
	int getSize() {
		return size;
	}
};

int main() {
	cout << "����Ʈ �Ű� ������ ���������� ���� �Ǿ����� Ȯ���ϴ� ���α׷� ����" << endl;
	
	MyVector mv1;
	cout << mv1.getVector() << endl;
	cout << endl;
	for (int i = 0; i < mv1.getSize(); i++) {
		cout << mv1.getVector(i) << ' ';
		if ((i+1) % 10 == 0) cout << endl;
	}
	cout << endl;

	MyVector mv2(20, 3);
	cout << mv2.getVector() << endl;
	cout << endl;
	for (int i = 0; i < mv2.getSize(); i++) {
		cout << mv2.getVector(i) << ' ';
		if ((i+1) % 10 == 0) cout << endl;
	}
	cout << endl;
}
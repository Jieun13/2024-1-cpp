#include<iostream>

using namespace std;

class MyIntStack {
	int* p; // ���� �޸𸮷� ����� ������
	int size; // ������ �ִ� ũ��
	int tos; // ������ ž�� ����Ű�� �ε���
public:
	MyIntStack() {
		size = 0;
		p = new int[size];
		tos = -1;
	}
	MyIntStack(int size) {
		this->size = size;
		p = new int[size];
		tos = -1;
	}
	MyIntStack(const MyIntStack& s) { // ���� ������
		size = s.size;
		tos = s.tos;
		p = new int[size];
		for (int i = 0; i < size; i++) {
			p[i] = s.p[i];
		}
	}
	~MyIntStack() {
		delete [] p;
	}
	bool push(int n);
	bool pop(int& n);
};

bool MyIntStack::push(int n) { // ���� n�� ���ÿ� Ǫ���Ѵ�.
	// ������ �� �� ������ false��, �ƴϸ� true ����
	if (tos == size - 1) {
		cout << "������ ���� �� �ֽ��ϴ�." << endl;
		return false;
	}
	else {
		tos++;
		p[tos] = n;
		return true;
	}
}
bool MyIntStack::pop(int& n) { // ������ ž�� �ִ� ���� n�� ���Ѵ�.
// ���� ������ ��� ������ false��, �ƴϸ� true ����
	if (tos == -1) {
		cout << "������ ��� �ֽ��ϴ�." << endl;
		return false;
	}
	else {
		n = p[tos];
		tos--;
		return true;
	}
}

int main() {
	MyIntStack a(10);

	a.push(10);
	a.push(20);

	MyIntStack b = a; // ���� ����
	b.push(30);

	int n;

	a.pop(n); // ���� a ��
	cout << "���� a���� ���� �� " << n << endl;
	b.pop(n); // ���� b ��
	cout << "���� b���� ���� �� " << n << endl;

}
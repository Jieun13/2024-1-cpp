#include<iostream>

using namespace std;

class SortedArray {
	int size; // ���� �迭�� ũ��
	int* p; // ���� �迭�� ���� ������
	void sort(); // ���� �迭�� ������������ ����
public:
	SortedArray() {
		p = NULL;
		size = 0;
	}
	SortedArray(SortedArray& src); 
	SortedArray(int p[], int size);
	SortedArray operator + (SortedArray& op2);
	SortedArray& operator = (const SortedArray& op2);
	~SortedArray() {
		if(p) delete[] p;
	}
	void show();
};


void SortedArray::sort() { //����
	int tmp;
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (p[i] > p[j]) {
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}
SortedArray::SortedArray(SortedArray& src) { //���������
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = src.p[i];
	}
}
SortedArray::SortedArray(int p[], int size) { //������
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = p[i];
	}
}
SortedArray SortedArray::operator + (SortedArray& op2) { // ���� �迭�� op2 �迭 �߰�
	SortedArray res;
	res.size = this->size + op2.size;
	res.p = new int[res.size];
	for (int i = 0; i < res.size; i++) {
		if (i < this->size) {
			res.p[i] = this->p[i];
		}
		else {
			res.p[i] = op2.p[i-(res.size-op2.size)];
		}
	}
	return res;
}
SortedArray& SortedArray::operator = (const SortedArray& op2) { // ���� �迭�� op2 �迭 ����
	delete[] p;
	this->size = op2.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = op2.p[i];
	}
	return *this;
}
void SortedArray::show() { //���
	sort();
	cout << "�迭 ��� : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;
	c = a + b; // +, = ������ �ۼ� �ʿ�
	// +�����ڰ� SortedArray ��ü�� �����ϹǷ� ���� ������ �ʿ�
	a.show();
	b.show();
	c.show();
}
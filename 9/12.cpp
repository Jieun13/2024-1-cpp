#include<iostream>

using namespace std;

class SortedArray {
	int size; // 현재 배열의 크기
	int* p; // 정수 배열에 대한 포인터
	void sort(); // 정수 배열을 오름차순으로 정렬
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


void SortedArray::sort() { //정렬
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
SortedArray::SortedArray(SortedArray& src) { //복사생성자
	this->size = src.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = src.p[i];
	}
}
SortedArray::SortedArray(int p[], int size) { //생성자
	this->size = size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = p[i];
	}
}
SortedArray SortedArray::operator + (SortedArray& op2) { // 현재 배열에 op2 배열 추가
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
SortedArray& SortedArray::operator = (const SortedArray& op2) { // 현재 배열에 op2 배열 복사
	delete[] p;
	this->size = op2.size;
	this->p = new int[size];
	for (int i = 0; i < size; i++) {
		this->p[i] = op2.p[i];
	}
	return *this;
}
void SortedArray::show() { //출력
	sort();
	cout << "배열 출력 : ";
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n[] = { 2, 20, 6 };
	int m[] = { 10, 7, 8, 30 };
	SortedArray a(n, 3), b(m, 4), c;
	c = a + b; // +, = 연산자 작성 필요
	// +연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요
	a.show();
	b.show();
	c.show();
}
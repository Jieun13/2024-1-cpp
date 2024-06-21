#include<iostream>

using namespace std;

class MyIntStack {
	int* p; // 스택 메모리로 사용할 포인터
	int size; // 스택의 최대 크기
	int tos; // 스택의 탑을 가리키는 인덱스
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
	MyIntStack(const MyIntStack& s) { // 복사 생성자
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

bool MyIntStack::push(int n) { // 정수 n을 스택에 푸시한다.
	// 스택이 꽉 차 있으면 false를, 아니면 true 리턴
	if (tos == size - 1) {
		cout << "스택이 가득 차 있습니다." << endl;
		return false;
	}
	else {
		tos++;
		p[tos] = n;
		return true;
	}
}
bool MyIntStack::pop(int& n) { // 스택의 탑에 있는 값을 n에 팝한다.
// 만일 스택이 비어 있으면 false를, 아니면 true 리턴
	if (tos == -1) {
		cout << "스택이 비어 있습니다." << endl;
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

	MyIntStack b = a; // 복사 생성
	b.push(30);

	int n;

	a.pop(n); // 스택 a 팝
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n); // 스택 b 팝
	cout << "스택 b에서 팝한 값 " << n << endl;

}
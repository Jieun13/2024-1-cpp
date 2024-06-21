#include<iostream>
#include<string>

using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];	//n개 정수 배열의 동적 생성
	}
	~Sample() {	//동적 할당 받은 p 메모리 소멸
		delete[] p;
	}
	void read();
	void write();
	int big();
};

void Sample::read() {	//동적 할당 받은 정수 배열 p에 입력 받기
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() {	//정수 배열을 화면에 출력
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << '\n';
}
int Sample::big() {	//정수 배열에서 가장 큰 수 리턴 
	int big = 0;
	for (int i = 0; i < size; i++) {
		if (big < p[i]) big = p[i];
	}
	return big;
}

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "가장 큰 수는 " << s.big() << endl;
}
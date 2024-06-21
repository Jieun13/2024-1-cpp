#include<iostream>

using namespace std;

class MyIntStack {
	int p[10]; // 최대 10개의 정수 저장
	int tos; // 스택의 꼭대기를 가리키는 인덱스
public:
	MyIntStack() {
		p[10] = { 0, };
		tos = -1;
	}
	bool push(int n) { // 정수 n 푸시. 꽉 차 있으면 false, 아니면 true 리턴
		if (tos == 9) return false;
		else {
			tos++;
			p[tos] = n;
			return true;
		}
	}
	bool pop(int& n) { // 팝하여 n에 저장. 스택이 비어 있으면 false, 아니면 true 리턴
		if (tos == -1) return false;
		else {
			n = p[tos];
			tos--;
			return true;
		}
	}
};

int main() {
	MyIntStack a;
	for (int i = 0; i < 11; i++) {				// 11개를 푸시하면, 마지막에는 stack full이 된다.
		if (a.push(i)) cout << i << ' ';		// 푸시된 값 에코
		else cout << endl << i + 1 << " 번 째 stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {				// 11개를 팝하면, 마지막에는 stack 가 된다.
		if (a.pop(n)) cout << n << ' ';			// 팝 한 값 출력
		else cout << endl << i + 1 << " 번 째 stack empty";
	}
	cout << endl;
}
#include<iostream>

using namespace std;

class Statistics {
	int* p;
	int top;
public : 
	Statistics() {
		p = new int[10];
		top = -1;
	}
	~Statistics(){
		delete[] p;
	}
	bool operator !() {
		if (top == -1) return true;
		else return false;
	}
	Statistics& operator << (int x) {
		p[++top] = x;
		return *this;
	}
	void operator >> (int& avg) {
		int sum = 0;
		for (int i = 0; i < top+1; i++) {
			sum += p[i];
		}
		avg = sum / (top + 1);
	}
	void operator ~ () {
		for (int i = 0; i < top+1; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이타가 없습니다." << endl;

	int x[5];
	cout << "5 개의 정수를 입력하라 >>";

	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < 5; i++) {
		stat << x[i];
	}

	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}
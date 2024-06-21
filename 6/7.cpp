#include<iostream>

using namespace std;

class MyIntStack {
	int p[10]; // �ִ� 10���� ���� ����
	int tos; // ������ ����⸦ ����Ű�� �ε���
public:
	MyIntStack() {
		p[10] = { 0, };
		tos = -1;
	}
	bool push(int n) { // ���� n Ǫ��. �� �� ������ false, �ƴϸ� true ����
		if (tos == 9) return false;
		else {
			tos++;
			p[tos] = n;
			return true;
		}
	}
	bool pop(int& n) { // ���Ͽ� n�� ����. ������ ��� ������ false, �ƴϸ� true ����
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
	for (int i = 0; i < 11; i++) {				// 11���� Ǫ���ϸ�, ���������� stack full�� �ȴ�.
		if (a.push(i)) cout << i << ' ';		// Ǫ�õ� �� ����
		else cout << endl << i + 1 << " �� ° stack full" << endl;
	}
	int n;
	for (int i = 0; i < 11; i++) {				// 11���� ���ϸ�, ���������� stack �� �ȴ�.
		if (a.pop(n)) cout << n << ' ';			// �� �� �� ���
		else cout << endl << i + 1 << " �� ° stack empty";
	}
	cout << endl;
}
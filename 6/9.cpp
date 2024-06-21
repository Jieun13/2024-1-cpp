#include<iostream>

using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) { // �Ű� ���� value�� ��� value�� �ʱ�ȭ�Ѵ�.
		this->value = value;
	}
	Accumulator& add(int n) { // value�� n�� ���� ���� �����Ѵ�.
		value += n;
		return *this;
	}
	int get() { // ������ �� value�� �����Ѵ�.
		return value;
	}
};

int main() {
	Accumulator acc(10);
	acc.add(5).add(6).add(7); // acc�� value ����� 280| �ȴ�.
	cout << acc.get(); // 28 ���
}
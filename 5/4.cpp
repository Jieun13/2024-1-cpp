#include<iostream>
#include<string>

using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[n];	//n�� ���� �迭�� ���� ����
	}
	~Sample() {	//���� �Ҵ� ���� p �޸� �Ҹ�
		delete[] p;
	}
	void read();
	void write();
	int big();
};

void Sample::read() {	//���� �Ҵ� ���� ���� �迭 p�� �Է� �ޱ�
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}
void Sample::write() {	//���� �迭�� ȭ�鿡 ���
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << '\n';
}
int Sample::big() {	//���� �迭���� ���� ū �� ���� 
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
	cout << "���� ū ���� " << s.big() << endl;
}
#include<iostream>
#include "IntStack.h"

using namespace std;

int main() {
	int size, num;

	cout << "������ ũ�⸦ �Է��ϼ��� : ";
	cin >> size;
	IntStack stack(size);

	cout << "���ÿ� push �� ������ �Է��ϼ���.(�Է� ���� : -1) : ";
	
	while(true) {
		cin >> num;
		if (num == -1) break;
		if(stack.push(num));
		else {
			cout << "������ ��ȭ �����Դϴ�." << endl;
		}
	}

	cout << "���� ���ÿ� ����ִ� ������ �� " << stack.size() << "�� �Դϴ�." << endl;
	cout << "�Էµ� ������ ����մϴ�. " << endl;

	while (stack.size()>0) {
		if (stack.pop(num)) {
			cout << num << ' ';
		}
		else {
			cout << endl;
		}
	}
}
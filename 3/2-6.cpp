#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str1[100];
	char str2[100];

	cout << "�� ��ȣ�� �Է��ϼ��� >> ";
	cin.getline(str1, 100, '\n');

	cout << "�ٽ� �� �� �� ��ȣ�� �Է��ϼ��� >> ";
	cin.getline(str2, 100, '\n');

	if (strcmp(str1, str2) == 0) {
		cout << "�����ϴ�." << endl;
	}
	else {
		cout << "���� �ʽ��ϴ�." << endl;
	}
}
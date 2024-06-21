#include <iostream>
#include <fstream>

using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "NULL"; // file�� NULL �������̸� NULL ����
	ifstream fin(file);
	if (!fin) throw -2; // ���Ⱑ �����ϸ� -2 ����

	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("C:\\Windows\\system.ini");
		cout << "���� ũ�� = " << n << endl; // ���� ũ�� = 219�� ��µ�
		int m = getFileSize(NULL);
		cout << "���� ũ�� = " << m << endl; 
	}
	catch (const char* c) {
		cout << "���� �߻� : ���ϸ��� " << c << "�Դϴ�." << endl;
	}
	catch (int a) {
		cout << "���� �߻� : ������ �д� �� �����߽��ϴ�." << endl;
	}
	
}
#include<iostream>

using namespace std;

int main() {
	int i;
	double ave;
	int* pSum = new int;		//�հ�� ����� ���ϴ� ������ ���̹Ƿ� �������� �Ҵ�
	int* pArray = new int[5];	//�迭 ���� �Ҵ�
	
	if (!pArray) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
	}
	if (!pSum) {
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�." << endl;
	}
	*pSum = 0;

	cout << "���� 5�� �Է� >> ";

	for (i = 0; i < 5; i++) {
		cin >> pArray[i];			//�Է� ���� �迭�� ����
		*pSum = *pSum + pArray[i];	//�հ迡 ���ϱ�
	}

	ave = (double)*pSum / 5;	//�Ҽ��� �������� ����ؾ� �ϹǷ� double������ ĳ����(�� ��ȯ)
	delete  pSum;

	cout << "��� : " << ave << endl;	//��հ� ���
	
	delete [] pArray;		//�迭 �Ҹ�
}
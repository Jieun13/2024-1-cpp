#include<iostream>
#include"Ram.h"

using namespace std;

Ram::Ram() {								//mem �迭�� 0���� �ʱ�ȭ�ϰ� 5ize 100 * 1024�� �ʱ�ȭ
	mem[100*1024] = { 0, };
	size = 100 * 1024;
}
Ram::~Ram() {								//"�޸� ���ŵ�" ���ڿ� ���
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) {				//address �ּ��� �޸� ����Ʈ ����
	return mem[address];
}

void Ram::write(int address, char value) {	//address �ּҿ� �� ����Ʈ�� value ���� 
	mem[address] = value;
}
#include<iostream>
#include<string>
#include<exception>

using namespace std;

int main() {
	string str;
	int index = 0, startIndex = 0;
	int cnt = 0;
	int i;
	char c;

	cout << "���ڿ� �Է� >>";
	getline(cin, str);

	while (true) {
		index = str.find('a', startIndex);

		if (index != string::npos) {	//���� ����� �� index���� �޾Ҵٸ�
			cnt++;						//ī��Ʈ ����
			startIndex = index + 1;		//�ش� �ε����� + 1 ��ġ�������� �ٽ� ã�� �Ŵϱ� startIndex �缳��
			index = 0;					//index�� �ʱ�ȭ
		}
		else {
			break;						//����� �� ���� ���� ���ߴٸ� �������� ����������
		}
	}
	cout << "find ��� : ���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;	//find �Լ��� ã�� ��� ���

	cnt = 0;	//�ٽ� 0���� �ʱ�ȭ

	for (i = 0; i < str.length(); i++) {
		try {
			c = str.at(i);				//c�� i��° ���� ����
		}
		catch (exception err) {
			err.what();
		}
		if (c == 'a') {					//���� c�� ����� ���ڰ� a���
			cnt++;						//ī��Ʈ ����
		}
	}

	cout << "at ��� : ���� a�� " << cnt << "�� �ֽ��ϴ�." << endl;	//at()���� ã�� �Լ� ���
}
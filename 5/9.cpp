#include<iostream>
#include<string>

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {
		name = '\0';
		tel = '\0';
	}
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	string name, tel;
	int i, cnt;

	Person* pList = new Person[3];
	cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���" << endl;

	for (i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		pList[i].set(name, tel);
	}
	cout << "��� ����� �̸��� ";
	for (i = 0; i < 3; i++) {
		cout << pList[i].getName() << " ";
	}
	cout << endl;

	while (true) {

		cout << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
		cin >> name;

		for (i = 0; i < 3; i++) {
			if (name == pList[i].getName()) {	//== �����ڷ� ��, compare �Լ� ��뵵 ����
				cnt = i;	//������ �ش� �ε��� �� ����
				break;
			}
			else {
				cnt = 4;	//���� ������ 4�� ����
			}
		}
		if ((cnt==0)||(cnt==1)||(cnt==2)) {
			cout << "��ȭ��ȣ�� " << pList[cnt].getTel() << endl;
			break;
		}
		else if (cnt == 4) {
			cout << "��Ͽ� �ش� �̸��� �����ϴ�." << endl;
		}
	}
	delete[] pList;
}
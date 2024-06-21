#include<iostream>

using namespace std;

class Container { // �� �ϳ��� ��Ÿ���� Ŭ����
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
};

class CoffeeVendingMachine { // Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ����
	Container tong[3]; // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
	void fill() {
		tong[0].fill();
		tong[1].fill();
		tong[2].fill();
	}
	void selectEspresso();
	void selectAmericano();
	void selectSugarcoffee();
	void show() {
		cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
	}
public:
	void run();
};

void CoffeeVendingMachine::selectEspresso() {
	if ((tong[0].getSize() - 1 >= 0) && (tong[1].getSize() - 1 >= 0)) {
		tong[0].consume();
		tong[1].consume();
		cout << "���������� ���Խ��ϴ�." << endl;
	}
	else cout << "���ᰡ �����մϴ�." << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	if ((tong[0].getSize() - 1 >= 0) && (tong[1].getSize() - 2 >= 0)) {
		tong[0].consume();
		tong[1].consume(); tong[1].consume();
		cout << "�Ƹ޸�ī�� ���Խ��ϴ�." << endl;
	}
	else cout << "���ᰡ �����մϴ�." << endl;
}

void CoffeeVendingMachine::selectSugarcoffee() {
	if ((tong[0].getSize() - 1 >= 0) && (tong[1].getSize() - 2 >= 0) && (tong[2].getSize() - 1 >= 0)) {
		tong[0].consume();
		tong[1].consume(); tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� ���Խ��ϴ�." << endl;
	}
	else cout << "���ᰡ �����մϴ�." << endl;
}

void CoffeeVendingMachine::run() {
	int input;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;

	while (true) {
		cout << "�޴��� �����ּ��� (1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ�����, 5: ä���, 6: ����) >> ";
		cin >> input;

		if (input == 6) {
			cout << "Ŀ�Ǹӽ��� ����˴ϴ�." << endl;
			break;
		}

		switch (input) {
		case 1:
			selectEspresso();
			break;
		case 2:
			selectAmericano();
			break;
		case 3:
			selectSugarcoffee();
			break;
		case 4:
			show();
			break;
		case 5:
			fill();
			break;
		default:
			cout << "�߸��� �����Դϴ�." << endl;
			break;
		}
	}
}

int main() {
	CoffeeVendingMachine machine;
	machine.run();
}
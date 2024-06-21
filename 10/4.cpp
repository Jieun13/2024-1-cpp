#include<iostream>

using namespace std;

class Printer {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public : 
	Printer(string model, string manufacturer, int availableCount = 5) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->printedCount = 0;
		this->availableCount = availableCount;
	}
	string getModel() {
		return model;
	}
	string getManufacturer() {
		return manufacturer;
	}
	int getPrintedCount() {
		return printedCount;
	}
	int getAvailableCount() {
		return availableCount;
	}
	void print(int pages) {
		if (availableCount >= pages) {
			availableCount -= pages;
			printedCount += pages;
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
		}
		else {
			cout << "������ �����ؼ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void getPrinterInfo() {
		cout << "��ũ�� : " << getModel() << ", " << getManufacturer() << ", " << "���� ���� " << getAvailableCount() << "��, ";
	}
};

class InkJetPrinter : public Printer {
	int availableInk;
public : 
	InkJetPrinter(string model, string manufacturer, int availableCount, int avaInk = 10) : Printer(model, manufacturer, availableCount) {;
		this->availableInk = avaInk;
	}
	void printInkJet(int pages) {
		if (availableInk >= pages) {
			print(pages);
			availableInk -= pages;
		}
		else {
			cout << "��ũ�� �����ؼ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void getInfo() {
		getPrinterInfo();
		cout << "���� ��ũ " << availableInk << endl;
	}
};

class LaserPrinter : public Printer {
	int availableToner;
public:
	LaserPrinter(string model, string manufacturer, int availableCount, int avaToner = 10) : Printer(model, manufacturer, availableCount) {
		this->availableToner = avaToner;
	}
	void printLaser(int pages) {
		if (availableToner >= pages) {
			print(pages);
			availableToner -= pages;
		}
		else {
			cout << "��ʰ� �����ؼ� ����Ʈ�� �� �����ϴ�." << endl;
		}
	}
	void getInfo() {
		getPrinterInfo();
		cout << "���� ��� " << availableToner << endl;
	}
};

int main() {

	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 4);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵� ���� 2���� �����ʹ� �Ʒ��� ����." << endl;
	ink->getInfo();
	laser->getInfo();
	
	while (true) {
		while (true) {
			int printer, page;

			cout << endl;
			cout << "������ (1:��ũ�� 2:������)�� �ż� �Է� >> ";
			cin >> printer >> page;

			if (printer == 1) {
				ink->printInkJet(page);
				break;
			}
			else if (printer == 2) {
				laser->printLaser(page);
				break;
			}
			else {
				cout << "�߸��� �Է°��Դϴ�. �ٽ� �Է��ϼ���." << endl;
			}
		}

		ink->getInfo();
		laser->getInfo();

		bool stopFlag = false;

		while (true) {
			char c;
			cout << "��� ����Ʈ�Ͻðڽ��ϱ�? (y/n) >> ";
			cin >> c;
			if (c == 'y') {
				break;
			}
			else if(c == 'n') {
				stopFlag = true;
				break;
			}
			else {
				cout << "�߸��� �Է°��Դϴ�. �ٽ� �Է��ϼ���." << endl;
			}
		}

		if (stopFlag == true) {
			break;
		}
	}
	
	delete ink;
	delete laser;
}
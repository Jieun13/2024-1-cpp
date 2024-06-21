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
			cout << "프린트하였습니다." << endl;
		}
		else {
			cout << "용지가 부족해서 프린트할 수 없습니다." << endl;
		}
	}
	void getPrinterInfo() {
		cout << "잉크젯 : " << getModel() << ", " << getManufacturer() << ", " << "남은 종이 " << getAvailableCount() << "장, ";
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
			cout << "잉크가 부족해서 프린트할 수 없습니다." << endl;
		}
	}
	void getInfo() {
		getPrinterInfo();
		cout << "남은 잉크 " << availableInk << endl;
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
			cout << "토너가 부족해서 프린트할 수 없습니다." << endl;
		}
	}
	void getInfo() {
		getPrinterInfo();
		cout << "남은 토너 " << availableToner << endl;
	}
};

int main() {

	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 4);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동 중인 2대의 프린터는 아래와 같다." << endl;
	ink->getInfo();
	laser->getInfo();
	
	while (true) {
		while (true) {
			int printer, page;

			cout << endl;
			cout << "프린터 (1:잉크젯 2:레이저)와 매수 입력 >> ";
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
				cout << "잘못된 입력값입니다. 다시 입력하세요." << endl;
			}
		}

		ink->getInfo();
		laser->getInfo();

		bool stopFlag = false;

		while (true) {
			char c;
			cout << "계속 프린트하시겠습니까? (y/n) >> ";
			cin >> c;
			if (c == 'y') {
				break;
			}
			else if(c == 'n') {
				stopFlag = true;
				break;
			}
			else {
				cout << "잘못된 입력값입니다. 다시 입력하세요." << endl;
			}
		}

		if (stopFlag == true) {
			break;
		}
	}
	
	delete ink;
	delete laser;
}
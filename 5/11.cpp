#include<iostream>

using namespace std;

class Container { // 통 하나를 나타내는 클래스
	int size;
public:
	Container() { size = 10; }
	void fill() { size = 10; }
	void consume() { size -= 1; }
	int getSize() { return size; }
};

class CoffeeVendingMachine { // 커피자판기를 표현하는 클래스
	Container tong[3]; // tong[0]는 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
	void fill() {
		tong[0].fill();
		tong[1].fill();
		tong[2].fill();
	}
	void selectEspresso();
	void selectAmericano();
	void selectSugarcoffee();
	void show() {
		cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
	}
public:
	void run();
};

void CoffeeVendingMachine::selectEspresso() {
	if ((tong[0].getSize() - 1 >= 0) && (tong[1].getSize() - 1 >= 0)) {
		tong[0].consume();
		tong[1].consume();
		cout << "에스프레소 나왔습니다." << endl;
	}
	else cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	if ((tong[0].getSize() - 1 >= 0) && (tong[1].getSize() - 2 >= 0)) {
		tong[0].consume();
		tong[1].consume(); tong[1].consume();
		cout << "아메리카노 나왔습니다." << endl;
	}
	else cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::selectSugarcoffee() {
	if ((tong[0].getSize() - 1 >= 0) && (tong[1].getSize() - 2 >= 0) && (tong[2].getSize() - 1 >= 0)) {
		tong[0].consume();
		tong[1].consume(); tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 나왔습니다." << endl;
	}
	else cout << "원료가 부족합니다." << endl;
}

void CoffeeVendingMachine::run() {
	int input;
	cout << "***** 커피자판기를 작동합니다. *****" << endl;

	while (true) {
		cout << "메뉴를 눌러주세요 (1: 에스프레소, 2: 아메리카노, 3: 설탕커피, 4: 잔량보기, 5: 채우기, 6: 종료) >> ";
		cin >> input;

		if (input == 6) {
			cout << "커피머신이 종료됩니다." << endl;
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
			cout << "잘못된 접근입니다." << endl;
			break;
		}
	}
}

int main() {
	CoffeeVendingMachine machine;
	machine.run();
}
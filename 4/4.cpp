#include<iostream>

using namespace std;

class CoffeeMachine {
private:
	int coffeeStatus;
	int waterStatus;
	int sugarStatus;

public:
	CoffeeMachine(int coffee, int water, int sugar) {
		coffeeStatus = coffee;
		waterStatus = water;
		sugarStatus = sugar;
	}
	void drinkespresso() {
		coffeeStatus -= 1;
		waterStatus -= 1;
	}
	void dninkAmericano() {
		coffeeStatus -= 1;
		waterStatus -= 2;
	}
	void drinksugarCoffee() {
		coffeeStatus -= 1;
		waterStatus -= 2;
		sugarStatus -= 1;
	}
	void show() {
		cout << "Ŀ�� �ӽ� ����, Ŀ�� : " << coffeeStatus << "\t�� : " << waterStatus << "\t���� : " << sugarStatus << endl;
	}
	void fill() {
		coffeeStatus = 10;
		waterStatus = 10;
		sugarStatus = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3);					// Ŀ�Ƿ�:5, ����:10, ����:3���� �ʱ�ȭ
	java.drinkespresso();							// Ŀ�� 1, �� 1 �Һ�
	java.show();									// ���� Ŀ�� �ӽ��� ���� ���
	java.dninkAmericano();							// Ŀ�� 1, �� 2 �Һ�
	java.show();									// ���� Ŀ�� �ӽ��� ���� ���
	java.drinksugarCoffee();						// Ŀ�� 1, �� 2, ���� 1 �Һ�
	java.show();									// ���� Ŀ�� �ӽ��� ���� ���
	java.fill();									// Ŀ�� 10, �� 10, ���� 10���� ä���
	java.show();									// ���� Ŀ�� �ӽ��� ���� ���
}
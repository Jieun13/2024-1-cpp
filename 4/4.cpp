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
		cout << "커피 머신 상태, 커피 : " << coffeeStatus << "\t물 : " << waterStatus << "\t설탕 : " << sugarStatus << endl;
	}
	void fill() {
		coffeeStatus = 10;
		waterStatus = 10;
		sugarStatus = 10;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3);					// 커피량:5, 물량:10, 설탕:3으로 초기화
	java.drinkespresso();							// 커피 1, 물 1 소비
	java.show();									// 현재 커피 머신의 상태 출력
	java.dninkAmericano();							// 커피 1, 물 2 소비
	java.show();									// 현재 커피 머신의 상태 출력
	java.drinksugarCoffee();						// 커피 1, 물 2, 설탕 1 소비
	java.show();									// 현재 커피 머신의 상태 출력
	java.fill();									// 커피 10, 물 10, 설탕 10으로 채우기
	java.show();									// 현재 커피 머신의 상태 출력
}
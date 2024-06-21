#include<iostream>

using namespace std;

class Account {
private :
	string id;
	int num;
	int balance;

public:
	Account() {
		id = '\0';
		num = 0;
		balance = 0;
	}
	Account(string i, int n, int bal) {
		id = i;
		num = n;
		balance = bal;
	}
	void deposit(int amount) {
		balance = balance + amount;
	}
	string getOwner() {
		return id;
	}
	int inquiry() {
		return balance;
	}
	int withdraw(int amount) {
		balance = balance - amount;
		return amount;
	}
};

int main() {
	Account a("kitae", 1, 5000);									// id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	a.deposit(50000);												// 50000원 저금

	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	int money = a.withdraw(20000);									// 20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
}
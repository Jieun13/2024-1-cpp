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
	Account a("kitae", 1, 5000);									// id 1��, �ܾ� 5000��, �̸��� kitae�� ���� ����
	a.deposit(50000);												// 50000�� ����

	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
	int money = a.withdraw(20000);									// 20000�� ���. withdraw()�� ����� ���� �ݾ� ����
	cout << a.getOwner() << "�� �ܾ��� " << a.inquiry() << endl;
}
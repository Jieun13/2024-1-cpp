#include<iostream>

using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "�� " << pages << "������" << endl;
	}
	string getTitle() { return title; }
	bool operator == (int n) {
		if (this->price == n) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator == (string str) {
		if (this->title == str) {
			return true;
		}
		else {
			return false;
		}
	}
	bool operator == (Book b) {
		bool bFlag = true;
		if (this->title != b.title) bFlag = false;
		if (this->price != b.price) bFlag = false;
		if (this->pages != b.pages) bFlag = false;

		return bFlag;
	}
};

int main() {
	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
	if (a == 30000) cout << "���� 30000��"<< endl; // price ��
	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�." << endl; // å title ��
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl; // title, price, pages ��� ��
}
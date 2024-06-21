#include<iostream>

using namespace std;

class Book;
void operator += (Book b, int n);
void operator -= (Book b, int n);

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
	friend void operator += (Book b, int n) {
		b.price += n;
	}
	friend void operator -= (Book b, int n) {
		b.price -= n;
	}
};

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500; // å a�� ���� 500�� ����
	b -= 500; // å b�� ���� 500�� ����
	a.show();
	b.show();
}
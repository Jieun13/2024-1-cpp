#include<iostream>

using namespace std;

class Book;
bool operator == (Book b, int n);
bool operator == (Book b, string str);
bool operator == (Book a, Book b);

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << "페이지" << endl;
	}
	string getTitle() { return title; }
	friend bool operator == (Book b, int n);
	friend bool operator == (Book b, string str);
	friend bool operator == (Book a, Book b);
};

bool operator == (Book b, int n) {
	if (b.price == n) {
		return true;
	}
	else {
		return false;
	}
}
bool operator == (Book b, string str) {
	if (b.title == str) {
		return true;
	}
	else {
		return false;
	}
}
bool operator == (Book a, Book b) {
	bool bFlag = true;
	if (a.title != b.title) bFlag = false;
	if (a.price != b.price) bFlag = false;
	if (a.pages != b.pages) bFlag = false;

	return bFlag;
}

int main() {
	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl; // price 비교
	if (a == "명품 C++") cout << "명품 C++ 입니다." << endl; // 책 title 비교
	if (a == b) cout << "두 책이 같은 책입니다." << endl; // title, price, pages 모두 비교
}
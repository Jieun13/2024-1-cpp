#include<iostream>
#include<string>

using namespace std;

class Book {
    string* title; // 제목 문자열
    int price; // 가격
public:
    Book(const string& title, int price) {
        this->price = price;
        this->title = new string(title);
    }
    ~Book() {
        delete title;
    }
    void set(const string& title, int price) {
        this->title = new string(title);
        this->price = price;
    }
    void show() {
        cout << *title << ' ' << price << "원" << endl;
    }
};

int main() {
    Book cpp("명품C++", 10000);
    Book java = cpp; // 복사 생성자 호출됨

    java.set("명품자바", 12000);

    cpp.show();
    java.show();
}
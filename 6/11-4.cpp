#include<iostream>
#include<string>

using namespace std;

class Book {
    string* title; // ���� ���ڿ�
    int price; // ����
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
        cout << *title << ' ' << price << "��" << endl;
    }
};

int main() {
    Book cpp("��ǰC++", 10000);
    Book java = cpp; // ���� ������ ȣ���

    java.set("��ǰ�ڹ�", 12000);

    cpp.show();
    java.show();
}
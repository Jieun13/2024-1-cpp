#include<iostream>
#include <iomanip>
#include<cctype>

using namespace std;

class Circle {
	string name;
	int radius;
public:
	Circle(int radius = 1, string name = "") {
		this->radius = radius; this->name = name;
	}
	friend ostream& operator << (ostream& stream, Circle &c);
	friend istream& operator >> (istream& stream, Circle &c);
};

ostream& operator << (ostream& stream, Circle &c) {
	cout << "(반지름이 " << c.radius << "인 " << c.name << ")";
	return stream;
}

istream& operator >> (istream& stream, Circle &c) {
	cout << "원의 반지름을 입력하세요 >> ";
	stream >> c.radius;
	cout << "원의 이름을 입력하세요 >> ";
	stream >> c.name;
	return stream;
}

int main() {
	Circle d, w;
	cin >> d >> w;
	cout << d << w << endl;
}
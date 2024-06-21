#include<iostream>
#include<string>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
	string name;
public : 
	NamedCircle(string name = "피자") : Circle() {
		this->name = name;
	}
	void setNamedCircle(int radius, string name) {
		this->setRadius(radius);
		this->name = name;
	}
	string getName() {
		return name;
	}
};

string getBig(NamedCircle list[], int size) {
	int maxSize = 0, maxIndex = 0;
	for (int i = 0; i < size; i++) {
		if (list[i].getArea() > maxSize) {
			maxIndex = i;
			maxSize = list[i].getArea();
		}
	}
	return list[maxIndex].getName();
}

int main() {
	NamedCircle pizza[5];
	int radius;
	string name;

	cout << "5 개의 정수 반지름과 원의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i+1 << ">> ";
		cin >> radius;
		getline(cin, name);
		pizza[i].setNamedCircle(radius, name);
	}
	cout << "가장 면적이 큰 피자는 " << getBig(pizza, 5) << "입니다" << endl;
}
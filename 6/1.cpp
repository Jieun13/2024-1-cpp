#include<iostream>

using namespace std;

class Circle {
	int radius;
public : 
	Circle() {
		radius = 0;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	double getradius() {
		return radius;
	}
};

void swap(class Circle& rc1, class Circle& rc2) {
	Circle tmp = rc1;
	rc1 = rc2;
	rc2 = tmp;
}

int main() {
	Circle c1(1);
	Circle c2(10);

	cout << "교환 전 : " << ' ';
	cout << c1.getradius() << '\t';
	cout << c2.getradius() << endl;

	swap(c1, c2);

	cout << "교환 후 : " << ' ';
	cout << c1.getradius() << '\t';
	cout << c2.getradius() << endl;
}
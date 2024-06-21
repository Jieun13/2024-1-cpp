#include<iostream>

using namespace std;

class Circle;
Circle& operator ++ (Circle& c);
Circle operator ++ (Circle& c, int r);

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius = " << radius << " 인 원" << endl;
	}
	friend Circle& operator ++ (Circle& c);
	friend Circle operator ++ (Circle& c, int r);
};

Circle& operator ++ (Circle& c) {
	c.radius += 1;
	return c;
}

Circle operator ++(Circle& c, int r) {
	Circle a = c;
	c.radius += 1;
	return a;
}

int main() {
	Circle a(5), b(4);
	++a; // 반지름을 1 증가 시킨다.
	b = a++; // 반지름을 1 증가 시킨다.
	a.show();
	b.show();
}
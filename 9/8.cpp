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
		cout << "radius = " << radius << " �� ��" << endl;
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
	++a; // �������� 1 ���� ��Ų��.
	b = a++; // �������� 1 ���� ��Ų��.
	a.show();
	b.show();
}
#include<iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	int num, i, radius;
	int cnt = 0;

	cout << "���� ���� >> ";
	cin >> num;

	Circle* pCircles = new Circle[num];

	for (i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� ������ >>";
		cin >> radius;
		pCircles[i].setRadius(radius);
		if (pCircles[i].getArea() > 100) cnt++;
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
	delete[] pCircles;
}
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

	cout << "원의 개수 >> ";
	cin >> num;

	Circle* pCircles = new Circle[num];

	for (i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 반지름 >>";
		cin >> radius;
		pCircles[i].setRadius(radius);
		if (pCircles[i].getArea() > 100) cnt++;
	}
	cout << "면적이 100보다 큰 원은 " << cnt << "개 입니다." << endl;
	delete[] pCircles;
}
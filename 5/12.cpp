#include<iostream>
#include<string>

using namespace std;

class Circle {
	int radius; // 원의 반지름 값
	string name; // 원의 이름
public:
	Circle() {
		radius = 0;
		name = '\0';
	}
	void setCircle(string name, int radius) { 
		this->name = name;
		this->radius = radius; 
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
public:
	CircleManager(int size) {
		p = new Circle[size];
		this->size = size;
	}
	~CircleManager() {
		delete[] p;
	}
	Circle* getCircle() { return p; }
	void searchByName();
	void searchByArea();
};

void CircleManager::searchByName() {
	string inputName;
	int index = -1;

	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> inputName;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == inputName) {
			index = i;
			cout << inputName << " 의 면적은 " << p[index].getArea() << endl;
			break;
		}
	}
	if (index == -1) cout << "해당 원이 목록에 없습니다." << endl;
}

void CircleManager::searchByArea() {
	double inputArea;
	int index = -1;

	cout << "최소 면적을 입력하세요 >> ";
	cin >> inputArea;
	cout << (int)inputArea << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > inputArea) {
			index = i;
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",\t";
		}
	}
	if (index == -1) cout << inputArea << "보다 더 큰 원이 없습니다." << endl;
}

int main() {
	int size;

	cout << "원의 개수 >> ";
	cin >> size;

	CircleManager circles(size);

	for (int i = 0; i < size; i++) {
		string name;
		int radius;
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		circles.getCircle()[i].setCircle(name, radius);
	}
	circles.searchByName();
	circles.searchByArea();
}
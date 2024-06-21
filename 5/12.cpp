#include<iostream>
#include<string>

using namespace std;

class Circle {
	int radius; // ���� ������ ��
	string name; // ���� �̸�
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
	Circle* p; // Circle �迭�� ���� ������
	int size; // �迭�� ũ��
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

	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> inputName;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == inputName) {
			index = i;
			cout << inputName << " �� ������ " << p[index].getArea() << endl;
			break;
		}
	}
	if (index == -1) cout << "�ش� ���� ��Ͽ� �����ϴ�." << endl;
}

void CircleManager::searchByArea() {
	double inputArea;
	int index = -1;

	cout << "�ּ� ������ �Է��ϼ��� >> ";
	cin >> inputArea;
	cout << (int)inputArea << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > inputArea) {
			index = i;
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ",\t";
		}
	}
	if (index == -1) cout << inputArea << "���� �� ū ���� �����ϴ�." << endl;
}

int main() {
	int size;

	cout << "���� ���� >> ";
	cin >> size;

	CircleManager circles(size);

	for (int i = 0; i < size; i++) {
		string name;
		int radius;
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		circles.getCircle()[i].setCircle(name, radius);
	}
	circles.searchByName();
	circles.searchByArea();
}
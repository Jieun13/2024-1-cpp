#include<iostream>
#include<string>

using namespace std;

class Person {
	string name;
public:
	Person() {
		name = '\0';
	}
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) {
		this->name = name;
	}
};

class Family {
	Person* p; // Person 배열 포인터
	int size; // Person 배열의 크기. 가족 구성원 수
	string familyName;	//가족 이름 저장할 문자열
public:
	Family(string name, int size) {
		p = new Person[size];
		this->size = size;
		this->familyName = name;
	}
	void setName(int index, string name) {
		p[index].setName(name);
	}
	void show();
	~Family() {
		delete [] p;
	}
	
};

void Family::show() {
	cout << familyName << "가족은 다음과 같이 " << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << '\t';
	}
}

int main() {
	Family* simpson = new Family("Simpson", 3); // 3명으로 구성된 Simpson 가족

	simpson -> setName(0, "Mr. Simpson");
	simpson -> setName(1, "Mrs. Simpson");
	simpson -> setName(2, "Bart Simpson");

	simpson -> show();
	delete simpson;
}
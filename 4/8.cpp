#include<iostream>
#include<string>

using namespace std;

class Integer {
	int num;
public:
	Integer(int n) {
		num = n;
	}
	Integer(string str) {
		num = stoi(str);
	}
	int get() {
		return num;
	}
	void set(int n) {
		num = n;
	}
	bool isEven() {
		if (num % 2 == 0) return true;
		else return false;
	}
};

int main() {
	Integer n(30);

	cout << n.get() << ' ';	//30���
	n.set(50);
	cout << n.get() << ' '; //50���

	Integer m("300");
	cout << m.get() << ' '; //300 ���
	cout << m.isEven();		//true(������ 1) ���

}
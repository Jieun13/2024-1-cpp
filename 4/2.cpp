#include<iostream>
#include<string>

using namespace std;

class Date {
private:
	int year;
	int month;
	int day;

public:
	Date() {
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(string str);
	int getYear() {
		return year;
	}
	int getaMonth() {
		return month;
	}
	int getDay() {
		return day;
	}
	void show() {
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
};

Date::Date(string str) {
	str.erase(remove(str.begin(), str.end(), '/'), str.end());		//1945/8/15�� 1945815�� ����
	int dateInt = stoi(str);

	year = dateInt / 1000;					// year = 1945
	dateInt = dateInt % 1000;				// dateInt = 815
	month = dateInt / 100;					// month = 8
	dateInt = dateInt % 100;				// dateInt = 15
	day = dateInt;							// day = 15
}

int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��

	independenceDay.show();

	cout << birth.getYear() << "," << birth.getaMonth() << "," << birth.getDay() << endl;
}
#include<iostream>

using namespace std;

class Color {
	int red;
	int yellow;
	int blue;
public : 
	Color(int r = 0, int y = 0, int b = 0) {
		red = r;
		yellow = y;
		blue = b;
	}
	void show() {
		cout << red << ' ' << yellow << ' ' << blue << endl;
	}
	Color operator + (Color b) {
		Color c;
		c.red = this->red + b.red;
		c.yellow = this->yellow + b.yellow;
		c.blue = this->blue + b.blue;
		return c;
	}
	bool operator == (Color b) {
		if ((this->red == b.red) && (this->yellow == b.yellow) && (this->blue == b.blue)) return true;
		else return false;
	}
};

int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show(); // 색 값 출력
	Color fuchsia(255, 0, 255);
	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
}
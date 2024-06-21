#pragma once
#include<iostream>
using namespace std;

class UI {
public : 
	static int getInput() {
		int input;
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
		cin >> input;
		return input;
	}
	static int getShape() {
		int shape;
		cout << "선:1, 원:2, 사각형:3 >>";
		cin >> shape;
		return shape;
	}
	static int getIndex() {
		int index;
		cout << "삭제하고자 하는 도형의 인덱스 >>";
		cin >> index;
		return index;
	}
};


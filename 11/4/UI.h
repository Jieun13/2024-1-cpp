#pragma once
#include<iostream>
using namespace std;

class UI {
public : 
	static int getInput() {
		int input;
		cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
		cin >> input;
		return input;
	}
	static int getShape() {
		int shape;
		cout << "��:1, ��:2, �簢��:3 >>";
		cin >> shape;
		return shape;
	}
	static int getIndex() {
		int index;
		cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
		cin >> index;
		return index;
	}
};


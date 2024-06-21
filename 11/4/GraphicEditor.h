#pragma once
#include<iostream>
#include"Shape.h"
#include"Line.h"
#include"Circle.h"
#include"Rectangle.h"
#include"UI.h"
using namespace std;

class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
public : 
	GraphicEditor() {
		pStart = NULL;
		pLast = NULL;
	}
	void insertShape(int shape) {
		Shape* p = NULL;
		switch (shape) {
		case 1:
			p = new Line();
			break;
		case 2:
			p = new Circle();
			break;
		case 3:
			p = new Rectangle();
			break;
		default:
			break;
		}
		if (pStart == NULL) {
			pStart = p;
			pLast = p;
			return;
		}
		pLast->add(p);
		pLast = pLast->getNext();
	}
	void deleteShape(int index) {
		Shape* p = pStart;
		Shape* pre = pStart;

		for (int i = 0; i < index; i++) {
			pre = p;
			p = p->getNext();
		}
		if (p == pLast) {
			pLast = pre;
		}
		if (p == pStart) {
			pStart = p->getNext();
			delete p;
		}
		else {
			pre->add(p->getNext());
			delete p;
		}
		
	}
	void print() {
		Shape* p = pStart;
		int cnt = 0;
		while (true) {
			cout << cnt << " : ";
			p->make();
			p = p->getNext();
			cnt++;
			if (p == NULL) break;
		}
	}
	void run() {
		int input, shape, index;
		int cnt = -1;

		cout << "그래픽 에디터입니다." << endl;

		while (true) {
			input = UI::getInput();
			if (input == 4) break;

			switch (input) {
			case 1:
				shape = UI::getShape();
				insertShape(shape);
				cnt++;
				break;

			case 2:
				index = UI::getIndex();
				if (index > cnt) {
					cout << "입력 범위를 초과했습니다." << endl;
				}
				else {
					deleteShape(index);
					cnt--;
				}
				break;

			case 3:
				print();
				break;

			default:
				return;
			}
		}
	}
};
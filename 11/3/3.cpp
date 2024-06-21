#include<iostream>
#include "IntStack.h"

using namespace std;

int main() {
	int size, num;

	cout << "스택의 크기를 입력하세요 : ";
	cin >> size;
	IntStack stack(size);

	cout << "스택에 push 할 정수를 입력하세요.(입력 종료 : -1) : ";
	
	while(true) {
		cin >> num;
		if (num == -1) break;
		if(stack.push(num));
		else {
			cout << "스택이 포화 상태입니다." << endl;
		}
	}

	cout << "현재 스택에 들어있는 정수는 총 " << stack.size() << "개 입니다." << endl;
	cout << "입력된 스택을 출력합니다. " << endl;

	while (stack.size()>0) {
		if (stack.pop(num)) {
			cout << num << ' ';
		}
		else {
			cout << endl;
		}
	}
}
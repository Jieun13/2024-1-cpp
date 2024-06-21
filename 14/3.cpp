#include <iostream>
#include <fstream>

using namespace std;

int getFileSize(const char* file) {
	if (file == NULL) throw "NULL"; // file이 NULL 포인터이면 NULL 리턴
	ifstream fin(file);
	if (!fin) throw -2; // 열기가 실패하면 -2 리턴

	fin.seekg(0, ios::end);
	int length = fin.tellg();
	return length;
}

int main() {
	try {
		int n = getFileSize("C:\\Windows\\system.ini");
		cout << "파일 크기 = " << n << endl; // 파일 크기 = 219가 출력됨
		int m = getFileSize(NULL);
		cout << "파일 크기 = " << m << endl; 
	}
	catch (const char* c) {
		cout << "예외 발생 : 파일명이 " << c << "입니다." << endl;
	}
	catch (int a) {
		cout << "예외 발생 : 파일을 읽는 데 실패했습니다." << endl;
	}
	
}
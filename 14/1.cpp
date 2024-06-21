#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin("C:\\Windows\\system.ini", ios::in | ios::binary);
	ofstream fout("C:\\test\\system.txt", ios::in | ios::binary);

	if (!fin) {
		cout << "fin 실패";
		return 0;
	}
	if (!fout) {
		cout << "fout 실패";
		return 0;
	}
	//파일 크기 알아내기
	fin.seekg(0, ios::end);
	long total = fin.tellg();
	int percent = (int)total / 10;
	fin.seekg(0, ios::beg);

	int ch = 0, cnt = 0, num = 0;
	cout << "복사 시작... " << endl;

	while (ch = fin.get() != EOF) {
		fout.put((char)ch);
		cnt++;
		if ((cnt % percent) == 0) {
			num++;
			cout << " .21B " << 10 * num << "%" << endl;
		}
	}
	cout << total << "B 복사 완료" << endl;
	fin.close();
	fout.close();
}
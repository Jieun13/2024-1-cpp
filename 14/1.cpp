#include<iostream>
#include<fstream>

using namespace std;

int main() {
	ifstream fin("C:\\Windows\\system.ini", ios::in | ios::binary);
	ofstream fout("C:\\test\\system.txt", ios::in | ios::binary);

	if (!fin) {
		cout << "fin ����";
		return 0;
	}
	if (!fout) {
		cout << "fout ����";
		return 0;
	}
	//���� ũ�� �˾Ƴ���
	fin.seekg(0, ios::end);
	long total = fin.tellg();
	int percent = (int)total / 10;
	fin.seekg(0, ios::beg);

	int ch = 0, cnt = 0, num = 0;
	cout << "���� ����... " << endl;

	while (ch = fin.get() != EOF) {
		fout.put((char)ch);
		cnt++;
		if ((cnt % percent) == 0) {
			num++;
			cout << " .21B " << 10 * num << "%" << endl;
		}
	}
	cout << total << "B ���� �Ϸ�" << endl;
	fin.close();
	fout.close();
}
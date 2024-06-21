#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

void isContain(const vector<string>& word, string& searchWord) {
	bool bFlag = false;
	for (const auto& str : word) {
		if (str.find(searchWord) != string::npos) {
			cout << str << endl;
			bFlag = true;
		}
	}
	if (bFlag == false) {
		cout << "�߰��� �� ����" << endl;
	}
}

int main() {
	
	const char* file = "C:\\test\\word.txt";

	ifstream fin(file);
	if (!fin) {
		cout << "���� ���⿡ �����߽��ϴ�." << endl;
		return 0;
	}
	string searchWord;
	vector <string> word;
	string str;

	while (getline(fin, str)) {
		word.push_back(str);
	}
	cout << "�ؽ�Ʈ ���� �ε� �Ϸ�" << endl;
	fin.close();
	
	cout << "�˻��� �����մϴ�. �ܾ �Է����ּ���." << endl;

	while (true) {
		cout << "�ܾ� >> ";
		cin >> searchWord;

		if (searchWord == "exit") {
			break;
		}

		isContain(word, searchWord);
	}

}
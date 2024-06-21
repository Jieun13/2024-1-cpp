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
		cout << "발견할 수 없음" << endl;
	}
}

int main() {
	
	const char* file = "C:\\test\\word.txt";

	ifstream fin(file);
	if (!fin) {
		cout << "파일 열기에 실패했습니다." << endl;
		return 0;
	}
	string searchWord;
	vector <string> word;
	string str;

	while (getline(fin, str)) {
		word.push_back(str);
	}
	cout << "텍스트 파일 로딩 완료" << endl;
	fin.close();
	
	cout << "검색을 시작합니다. 단어를 입력해주세요." << endl;

	while (true) {
		cout << "단어 >> ";
		cin >> searchWord;

		if (searchWord == "exit") {
			break;
		}

		isContain(word, searchWord);
	}

}
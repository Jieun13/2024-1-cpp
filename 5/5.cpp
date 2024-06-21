#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
	srand((unsigned)time(NULL));

	string str;
	cout << "아래에 한 줄을 입력하세요. (exit을 입력하면 종료합니다." << endl;
	
	while (true) {
		cout << ">> ";
		getline(cin, str);

		if (str == "exit") break;

		int size = str.length();

		while (true) {
			int n = rand() % size;
			cout << n <<endl;

			if (isalpha(str[n])) {
				if (str[n] > 97) {
					str[n] = rand() % 26 + 97;
				}
				else {
					str[n] = rand() % 26 + 65;
				}
				break;
			}
		}
		cout << str << endl;
	}
}
#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cout << "�Ʒ��� �� ���� �Է��ϼ���. (exit�� �Է��ϸ� �����մϴ�.)" << endl;
	while (true) {
		cout << ">> ";
		getline(cin, str);

		if (str == "exit") break;

		reverse(str.begin(), str.end());
		cout << str << endl;
	}
	
}
#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char cPass[20];

	while (true) {
		cout << "�����Ϸ��� yes�� �Է��ϼ��� >> ";
		cin.getline(cPass, 20, '\n');
		if (strcmp(cPass, "yes") == 0) break;
	}
	cout << "�����մϴ�..." << endl;

	return 0;
}
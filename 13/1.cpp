#include<iostream>
#include<string>

using namespace std;

int main() {
	char ch;

	while (true) {
		cin.get(ch);
		if (ch==EOF) break;

		else if (ch == ';') {
			cout.put('\n');
			cin.ignore(60, '\n');
		}
		else {
			cout.put(ch);
		}
	}
}
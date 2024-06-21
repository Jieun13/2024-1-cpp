#include<iostream>
#include<string>

using namespace std;

class Histogram {
	string str;
	int cnt;
	int alphabetCnt[26] = { 0, };
public : 
	Histogram(string input) {
		str = input;
		cnt = 0;
	}
	void put(string input) {
		str = str + input;
	}
	void putc(char c) {
		str.push_back(c);
	}
	void print();
	void prnHistogram();
	
};

void Histogram::print() {
	cout << str << endl;
	for (int i = 0; i < str.length(); i++) {
		char alpha = towlower(str[i]);
		if ((alpha >= 'a') && (alpha <= 'z')) {
			alpha = alpha - 'a';
			alphabetCnt[alpha]++;
			cnt++;
		}
	}
	cout << "ÃÑ ¾ËÆÄºª ¼ö : " << cnt << endl;
	prnHistogram();
}

void Histogram::prnHistogram() {
	for (int i = 0; i < 26; i++) {
		cout << char('a' + i) << " (" << alphabetCnt[i] << ") : ";
		for (int j = 0; j < alphabetCnt[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();
}
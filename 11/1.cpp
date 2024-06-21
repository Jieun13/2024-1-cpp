#include<iostream>

using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // src ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class KmToMile : public Converter {
	string source;
	string dest;
public:
	KmToMile(double r) : Converter(r) {
		source = "Km";
		dest = "Mile";
	}
	double convert(double src) {
		return src / ratio;

	}
	string getSourceString() {
		return source;
	}
	string getDestString() {
		return dest;
	}
};

int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	int num;

	cout.setf(ios::left);
	cout << setw(15) << setfill(' ') << "Number";
	cout << setw(15) << setfill(' ') << "Square";
	cout << setw(15) << setfill(' ') << "Square Root" << endl;


	for (num = 0; num < 51; num += 5) {
		cout.precision(3);
		cout << setw(15) << setfill('_') << num;
		cout << setw(15) << setfill('_') << num * num;
		cout << setw(15) << setfill('_') << sqrt(num) << endl;
	}
}
#include<iostream>

using namespace std;

int big(int a, int b, int c = 100){
	int result;
	if (a > b) result = a;
	else result = b;

	if (c < result) result = c;

	return result;
}

int main() { //a랑 b 중에서 큰 값이랑 디폴트 100인 c랑 비교해서 작은값 리턴
	int x = big(3, 5); // 3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60 중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중 큰 값 600이 최대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;

}
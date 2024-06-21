#include<iostream>

using namespace std;

int getSum(int a, int b);

int main() {
    int n = 0;
    int sum = 0;

    cout << "끝 수를 입력하세요 > ";
    cin >> n;

    sum = getSum(1, n);
    cout << "1부터 " << n << "까지의 합은 " << sum << "입니다." << endl;
}

int getSum(int a, int b) {
    int k, res = 0;
    for (k = a; k <= b; k++) {
        res = res + k;
    }
    return res;
}
#include<iostream>

using namespace std;

int getSum(int a, int b);

int main() {
    int n = 0;
    int sum = 0;

    cout << "�� ���� �Է��ϼ��� > ";
    cin >> n;

    sum = getSum(1, n);
    cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
}

int getSum(int a, int b) {
    int k, res = 0;
    for (k = a; k <= b; k++) {
        res = res + k;
    }
    return res;
}
#include<iostream>

using namespace std;

int main() {
    int k, n = 0;
    int sum = 0;
    cout << "�� ���� �Է��ϼ��� : ";
    cin >> n;

    for (k = 0; k < n; k++) {
        sum = sum + k + 1;
    }
    cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�." << endl;
    return 0;
}
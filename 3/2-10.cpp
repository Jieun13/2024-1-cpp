#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char sInput[30];

    cin.getline(sInput, 30, '\n');          			//���ڿ� �Է� �ޱ�

    for (int i = 0; i < (strlen(sInput)); i++) {	    //���ڿ��� ���̸�ŭ �ݺ�
        for (int j = 0; j <= i; j++) {
            cout << sInput[j];
        }
        cout << '\n';
    }
}

#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char sInput[30];

    cin.getline(sInput, 30, '\n');          			//문자열 입력 받기

    for (int i = 0; i < (strlen(sInput)); i++) {	    //문자열의 길이만큼 반복
        for (int j = 0; j <= i; j++) {
            cout << sInput[j];
        }
        cout << '\n';
    }
}

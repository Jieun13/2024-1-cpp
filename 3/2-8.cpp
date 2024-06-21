#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char maxName[100];
    int max = 0;

    cout << "names? > ";

    for (int i = 0; i < 5; i++) {

        char name[100];
        cin.getline(name, 100, ';');
        cin.ignore();

        cout << i + 1 << ":" << name << endl;

        if (max < strlen(name)) {           //만약 저장되어 있는 maxName보다 이름이 길다면
            for (int j = 0; j < strlen(name) + 1; j++) {
                max = strlen(name);
                maxName[j] = name[j];                   //maxName에 해당 값 저장
            }
        }
    }
    cout << "Longest name is " << maxName << endl;
}
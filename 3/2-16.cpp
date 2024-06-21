#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void printResult(int frequency[]);                              //��� ���

int main()
{
    char inputStr[10000];                                       //���ڿ� ������ �迭 ����
    int frequency[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };    //26���� ���ĺ��� ���� �� ������ ������ �迭
    int sep;
    int cnt = 0;


    cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
    cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;

    cin.getline(inputStr, 10000, ';');

    for (int i = 0; i < strlen(inputStr); i++) {                    //���ڿ��� ���̸�ŭ �ݺ�
        if (isalpha(inputStr[i]) != 0) {                            //���ڿ��� i��° ��Ұ� ���ĺ��̸�
            inputStr[i] = tolower(inputStr[i]);                     //�ҹ��ڷ� ��ȯ
            cnt++;                                                  //�� ���ĺ��� ������ +1
            sep = inputStr[i] - 97;                                 //���ĺ��� ���ڷ� ��Ÿ���� �� 97���� �ҹ��� a�̱� ������ 97�� ����
            frequency[sep] += 1;                                    //sep���� �ش� ���ĺ��� �⺻ ���ĺ� �迭 �� �� ��°������ �˷���. 
                                                                    //�׷��Ƿ� ���ĺ��� ������ ������ �迭�� sep��° ���� +1
        }
    }

    cout << "�� ���ĺ� �� : " << cnt << endl;
    printResult(frequency);                                          //��� ���
}

void printResult(int frequency[]) {
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " (" << (frequency[i]) << ") : ";   //���ĺ��� ������� ����ϰ� ��ȣ �ȿ� ���ڿ� �� ���ĺ��� ������ �־� ���
        for (int j = 0; j < frequency[i]; j++) {
            cout << "*";                                             //�迭�� ����� ����ŭ * ���
        }
        cout << '\n';
    }
}
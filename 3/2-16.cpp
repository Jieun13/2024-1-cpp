#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void printResult(int frequency[]);                              //결과 출력

int main()
{
    char inputStr[10000];                                       //문자열 저장할 배열 선언
    int frequency[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };    //26개의 알파벳의 문장 속 개수를 저장할 배열
    int sep;
    int cnt = 0;


    cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
    cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;

    cin.getline(inputStr, 10000, ';');

    for (int i = 0; i < strlen(inputStr); i++) {                    //문자열의 길이만큼 반복
        if (isalpha(inputStr[i]) != 0) {                            //문자열의 i번째 요소가 알파벳이면
            inputStr[i] = tolower(inputStr[i]);                     //소문자로 변환
            cnt++;                                                  //총 알파벳의 개수에 +1
            sep = inputStr[i] - 97;                                 //알파벳을 숫자로 나타냈을 때 97부터 소문자 a이기 때문에 97을 빼줌
            frequency[sep] += 1;                                    //sep에는 해당 알파벳이 기본 알파벳 배열 중 몇 번째인지를 알려줌. 
                                                                    //그러므로 알파벳의 개수를 저장할 배열의 sep번째 수에 +1
        }
    }

    cout << "총 알파벳 수 : " << cnt << endl;
    printResult(frequency);                                          //결과 출력
}

void printResult(int frequency[]) {
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " (" << (frequency[i]) << ") : ";   //알파벳을 순서대로 출력하고 괄호 안에 문자열 속 알파벳의 개수를 넣어 출력
        for (int j = 0; j < frequency[i]; j++) {
            cout << "*";                                             //배열에 저장된 값만큼 * 출력
        }
        cout << '\n';
    }
}
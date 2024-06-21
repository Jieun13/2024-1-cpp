#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int iMenu, iAmount;
    string menu;

    cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

    while (true) {
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4 >> ";

        cin >> iMenu;
        if (iMenu == 4) break;

        switch (iMenu) {
        case 1:
            menu = "짬뽕";
            break;
        case 2:
            menu = "짜장";
            break;
        case 3:
            menu = "군만두";
            break;
        default:
            cout << "없는 메뉴입니다." << endl;
            break;
        }

        if (iMenu < 4) {
            cout << "몇 인분? >> ";
            cin >> iAmount;

            cout << menu << " " << iAmount << "인분 나왔습니다.." << endl;
        }
    }
    cout << "오늘 영업은 끝났습니다." << endl;

}
#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char coffee[100];
    int iTotalSell = 0;
    int iAmount = 0;
    int iPrice = 0;

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

    while (true) {

        cout << "주문 >> ";
        cin >> coffee >> iAmount;

        if (strcmp(coffee, "에스프레소") == 0) {
            iPrice = 2000;
        }
        else if (strcmp(coffee, "아메리카노") == 0) {
            iPrice = 2300;
        }
        else if (strcmp(coffee, "카푸치노") == 0) {
            iPrice = 2500;
        }
        else {
            cout << "없는 메뉴입니다." << endl;
        }

        iPrice = iAmount * iPrice;
        iTotalSell = iTotalSell + iPrice;

        cout << iPrice << "원입니다. 맛있게 드세요." << endl;

        if (iTotalSell > 20000) {
            break;
        }
    }
    cout << "오늘" << iTotalSell << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;

}
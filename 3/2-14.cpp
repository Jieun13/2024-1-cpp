#include<iostream>
#include<cstring>

using namespace std;

int main() {
    char coffee[100];
    int iTotalSell = 0;
    int iAmount = 0;
    int iPrice = 0;

    cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

    while (true) {

        cout << "�ֹ� >> ";
        cin >> coffee >> iAmount;

        if (strcmp(coffee, "����������") == 0) {
            iPrice = 2000;
        }
        else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
            iPrice = 2300;
        }
        else if (strcmp(coffee, "īǪġ��") == 0) {
            iPrice = 2500;
        }
        else {
            cout << "���� �޴��Դϴ�." << endl;
        }

        iPrice = iAmount * iPrice;
        iTotalSell = iTotalSell + iPrice;

        cout << iPrice << "���Դϴ�. ���ְ� �弼��." << endl;

        if (iTotalSell > 20000) {
            break;
        }
    }
    cout << "����" << iTotalSell << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;

}
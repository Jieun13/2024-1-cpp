#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int iMenu, iAmount;
    string menu;

    cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;

    while (true) {
        cout << "«��:1, ¥��:2, ������:3, ����:4 >> ";

        cin >> iMenu;
        if (iMenu == 4) break;

        switch (iMenu) {
        case 1:
            menu = "«��";
            break;
        case 2:
            menu = "¥��";
            break;
        case 3:
            menu = "������";
            break;
        default:
            cout << "���� �޴��Դϴ�." << endl;
            break;
        }

        if (iMenu < 4) {
            cout << "�� �κ�? >> ";
            cin >> iAmount;

            cout << menu << " " << iAmount << "�κ� ���Խ��ϴ�.." << endl;
        }
    }
    cout << "���� ������ �������ϴ�." << endl;

}
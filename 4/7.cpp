#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class SelectableRandom {
private:
    int num;
    int what;
public:
    SelectableRandom(int w) {
        if (w == 1) what = 1;                   //Ȧ�� ����Ϸ��� �Ű������� 1�� �Է�
        else what = 0;                          //¦�� ����Ϸ��� �Ű������� 1�� �ƴ� ��(0)�� �Է�
        num = 0;
        srand((unsigned)time(0));
    }
    int next() {
        if (what == 0) {                        //what�� ����� ���� 0�̶�� ¦���� ���ϴ� ��
            num = rand();
            if (num % 2 == 0) return num;
            else num -= 1; return num;
        }
        else {                                  //what�� ����� ���� 0�� �ƴ϶��, �� 1�̶�� Ȧ���� ���ϴ� ��
            num = rand();
            if (num % 2 == 1) return num;
            else num += 1; return num;
        }
    }
    int numInRange(int a, int b){
        if (what == 0) {                        //what�� ����� ���� 0�̶�� ¦���� ���ϴ� ��
            num = rand() % (b - a + 1) + a;
            if (num % 2 == 0) return num;
            else num -= 1; return num;
        }
        else {                                  //what�� ����� ���� 0�� �ƴ϶��, �� 1�̶�� Ȧ���� ���ϴ� ��
            num = rand() % (b - a + 1) + a;
            if (num % 2 == 1) return num;
            else num += 1; return num;
        }
    }
};

int main() {

    SelectableRandom sr1(0);    //¦�� ���� ����� ����

    cout << "-- 0���� " << RAND_MAX << "������ ���� ¦�� ���� 10�� --" << endl;

    for (int i = 0; i < 10; i++) {
        int n = sr1.next();     // 0���� RAND_MAX(32767) ������ ������ ����
        cout << n << ' ';
    }

    SelectableRandom sr2(1);    //Ȧ�� ���� ����� ����

    cout << endl << endl << "-- 2���� " << "9������ ���� Ȧ�� ���� 10�� --" << endl;

    for (int i = 0; i < 10; i++) {
        int n = sr2.numInRange(2, 9); // 2���� 9 ������ ������ Ȧ��
        cout << n << ' ';
    }

    cout << endl;
}
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
        if (w == 1) what = 1;                   //홀수 출력하려면 매개변수로 1을 입력
        else what = 0;                          //짝수 출력하려면 매개변수로 1이 아닌 수(0)를 입력
        num = 0;
        srand((unsigned)time(0));
    }
    int next() {
        if (what == 0) {                        //what에 저장된 값이 0이라면 짝수를 구하는 것
            num = rand();
            if (num % 2 == 0) return num;
            else num -= 1; return num;
        }
        else {                                  //what에 저장된 값이 0이 아니라면, 즉 1이라면 홀수를 구하는 것
            num = rand();
            if (num % 2 == 1) return num;
            else num += 1; return num;
        }
    }
    int numInRange(int a, int b){
        if (what == 0) {                        //what에 저장된 값이 0이라면 짝수를 구하는 것
            num = rand() % (b - a + 1) + a;
            if (num % 2 == 0) return num;
            else num -= 1; return num;
        }
        else {                                  //what에 저장된 값이 0이 아니라면, 즉 1이라면 홀수를 구하는 것
            num = rand() % (b - a + 1) + a;
            if (num % 2 == 1) return num;
            else num += 1; return num;
        }
    }
};

int main() {

    SelectableRandom sr1(0);    //짝수 정수 출력을 선택

    cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 짝수 정수 10개 --" << endl;

    for (int i = 0; i < 10; i++) {
        int n = sr1.next();     // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }

    SelectableRandom sr2(1);    //홀수 정수 출력을 선택

    cout << endl << endl << "-- 2에서 " << "9까지의 랜덤 홀수 정수 10개 --" << endl;

    for (int i = 0; i < 10; i++) {
        int n = sr2.numInRange(2, 9); // 2에서 9 사이의 랜덤한 홀수
        cout << n << ' ';
    }

    cout << endl;
}
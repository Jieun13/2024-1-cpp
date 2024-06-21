#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class EvenRandom{
private:
    int num;
public:
    int evenGet(){
        num = rand();
        if (num % 2 == 0) return num;
        else num -= 1; return num;
        return num;
    }
    int evenInRange(int a, int b){
        num = rand() % (b - a + 1) + a;
        if (num % 2 == 0) return num;
        else num -= 1; return num;
    }
};

int main(){

    srand ((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정

    EvenRandom er;

    cout <<"-- 0에서 "<< RAND_MAX << "까지의 랜덤 짝수 정수 10개 --" << endl;

    for (int i=0; i<10; i++) {
        int n = er.evenGet(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 짝수 정수 10개 --" << endl;

    for (int i=0; i<10; i++) {
        int n = er.evenInRange(2, 10); // 2에서 10 사이의 랜덤한 짝수 정수
        cout << n << ' ' ;
    }

    cout << endl;
}
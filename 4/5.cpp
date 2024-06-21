#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Random{
private:
    int num;
public:
    Random(){
        num = 0;
    }
    int next(){
        num = rand();
        return num;
    }
    int nextInRange(int a, int b){
        num = rand() % (b - a + 1) + a;
        return num;
    }
};

int main(){

    srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정

    Random r;

    cout <<"-- 0에서 "<< RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;

    for (int i=0; i<10; i++) {
        int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
        cout << n << ' ';
    }

    cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;

    for (int i=0; i<10; i++) {
        int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
        cout << n << ' ';
    }

    cout << endl;
}
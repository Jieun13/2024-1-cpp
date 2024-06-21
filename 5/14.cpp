#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

class Player {
	string name;
public : 
	void setName() {
		string userName;
		cin >> userName;
		this->name = userName;
	}
	string getName() {
		return name;
	}
};

class GamblingGame {
	Player user[2];
	bool getResult = false;	//게임이 끝났는지를 판단
public :
	GamblingGame() {
		srand((unsigned)time(NULL));	//게임을 실행할 때마다 다른 숫자가 나올 수 있도록 하기 위함
		cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
		cout << "첫 번째 선수 이름>> ";
		user[0].setName();
		cout << "두 번째 선수 이름>> ";
		user[1].setName();
	}
	bool getNumber();
	void play();
};

bool GamblingGame::getNumber() {
	int n[3];
	for (int i = 0; i < 3; i++) {
		n[i] = rand() % 3;
		cout << '\t' << n[i];
	}
	if ((n[0] == n[1]) && (n[1] == n[2])) return true;	//숫자가 모두 같으면 true 반환
	else return false; //하나라도 다른 게 있으면 false 반환
}

void GamblingGame:: play() {
	int index = 0;
	while (true) {
		cout << user[index].getName() << " : " << endl;
		getResult = getNumber();
		if (getResult == true) { //true면 승리하고 break
			cout << '\t' << user[index].getName() << "님 승리!" << endl;
			break;
		}
		else {	//false면 실패
			cout << '\t' << "아쉽군요!" << endl;
		}
		if (index == 1) index = 0;	//인덱스를 바꾸어서 다음 플레이어가 숫자를 받아올 수 있도록 함
		else index = 1;
	}
}


int main() {
	GamblingGame game;
	game.play();
}
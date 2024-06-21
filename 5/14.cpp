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
	bool getResult = false;	//������ ���������� �Ǵ�
public :
	GamblingGame() {
		srand((unsigned)time(NULL));	//������ ������ ������ �ٸ� ���ڰ� ���� �� �ֵ��� �ϱ� ����
		cout << "***** �׺� ������ �����մϴ�. *****" << endl;
		cout << "ù ��° ���� �̸�>> ";
		user[0].setName();
		cout << "�� ��° ���� �̸�>> ";
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
	if ((n[0] == n[1]) && (n[1] == n[2])) return true;	//���ڰ� ��� ������ true ��ȯ
	else return false; //�ϳ��� �ٸ� �� ������ false ��ȯ
}

void GamblingGame:: play() {
	int index = 0;
	while (true) {
		cout << user[index].getName() << " : " << endl;
		getResult = getNumber();
		if (getResult == true) { //true�� �¸��ϰ� break
			cout << '\t' << user[index].getName() << "�� �¸�!" << endl;
			break;
		}
		else {	//false�� ����
			cout << '\t' << "�ƽ�����!" << endl;
		}
		if (index == 1) index = 0;	//�ε����� �ٲپ ���� �÷��̾ ���ڸ� �޾ƿ� �� �ֵ��� ��
		else index = 1;
	}
}


int main() {
	GamblingGame game;
	game.play();
}
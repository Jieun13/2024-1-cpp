#include<iostream>
#include<string>

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {
		name = '\0';
		tel = '\0';
	}
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel) {
		this->name = name;
		this->tel = tel;
	}
};

int main() {
	string name, tel;
	int i, cnt;

	Person* pList = new Person[3];
	cout << "이름과 전화번호를 입력해주세요" << endl;

	for (i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		pList[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (i = 0; i < 3; i++) {
		cout << pList[i].getName() << " ";
	}
	cout << endl;

	while (true) {

		cout << "전화번호를 검색합니다. 이름을 입력하세요 >> ";
		cin >> name;

		for (i = 0; i < 3; i++) {
			if (name == pList[i].getName()) {	//== 연산자로 비교, compare 함수 사용도 가능
				cnt = i;	//같으면 해당 인덱스 값 저장
				break;
			}
			else {
				cnt = 4;	//같지 않으면 4를 저장
			}
		}
		if ((cnt==0)||(cnt==1)||(cnt==2)) {
			cout << "전화번호는 " << pList[cnt].getTel() << endl;
			break;
		}
		else if (cnt == 4) {
			cout << "목록에 해당 이름이 없습니다." << endl;
		}
	}
	delete[] pList;
}
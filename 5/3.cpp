#include<iostream>
#include<string>
#include<exception>

using namespace std;

int main() {
	string str;
	int index = 0, startIndex = 0;
	int cnt = 0;
	int i;
	char c;

	cout << "문자열 입력 >>";
	getline(cin, str);

	while (true) {
		index = str.find('a', startIndex);

		if (index != string::npos) {	//만약 제대로 된 index값을 받았다면
			cnt++;						//카운트 증가
			startIndex = index + 1;		//해당 인덱스값 + 1 위치에서부터 다시 찾을 거니까 startIndex 재설정
			index = 0;					//index값 초기화
		}
		else {
			break;						//제대로 된 값을 받지 못했다면 루프에서 빠져나오기
		}
	}
	cout << "find 사용 : 문자 a는 " << cnt << "개 있습니다." << endl;	//find 함수로 찾은 결과 출력

	cnt = 0;	//다시 0으로 초기화

	for (i = 0; i < str.length(); i++) {
		try {
			c = str.at(i);				//c에 i번째 문자 저장
		}
		catch (exception err) {
			err.what();
		}
		if (c == 'a') {					//만약 c에 저장된 문자가 a라면
			cnt++;						//카운트 증가
		}
	}

	cout << "at 사용 : 문자 a는 " << cnt << "개 있습니다." << endl;	//at()으로 찾은 함수 출력
}
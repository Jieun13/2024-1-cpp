#include<iostream>

using namespace std;

int main() {
	int i;
	double ave;
	int* pSum = new int;		//합계는 평균을 구하는 데에만 쓰이므로 동적으로 할당
	int* pArray = new int[5];	//배열 동적 할당
	
	if (!pArray) {
		cout << "메모리를 할당할 수 없습니다." << endl;
	}
	if (!pSum) {
		cout << "메모리를 할당할 수 없습니다." << endl;
	}
	*pSum = 0;

	cout << "정수 5개 입력 >> ";

	for (i = 0; i < 5; i++) {
		cin >> pArray[i];			//입력 값을 배열에 저장
		*pSum = *pSum + pArray[i];	//합계에 더하기
	}

	ave = (double)*pSum / 5;	//소수점 단위까지 출력해야 하므로 double형으로 캐스팅(형 변환)
	delete  pSum;

	cout << "평균 : " << ave << endl;	//평균값 출력
	
	delete [] pArray;		//배열 소멸
}
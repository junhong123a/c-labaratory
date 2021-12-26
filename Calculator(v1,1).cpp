//including modules
#include <time.h>
#include <string>
#include <iostream>

using namespace std;

//start function
void start() {
	cout << "계산기 v1.1\nMaker : Junhong(Developer)" << endl;
	cout << "계산기는 계속 개발중임!";
}

int main() {
	start();

	int p1, p2, bp = 0;
	char p3;

	makeresult:

	cout << "첫번째 수 입력:";
	cin >> p1;
	cout << "두번째 수 입력:";
	cin >> p2;

	cout << "사칙연산 부호 입력: ";
	cin >> p3;

	switch (p3) {
	case '+':
		cout << "계산 결과:" << p1 + p2 << endl;
		break;
	case '-':
		cout << "계산 l결과:" << p1 - p2 << endl;
		break;
	case '*':
		cout << "계산 결과:" << p1 * p2 << endl;
		break;
	case '/':
		cout << "계산 결과:" << p1 / p2 << endl;
		break;
	default:
		cout << "잘못 입력하셨습니다. 다시 입력해주세요!" << endl;
		goto makeresult;
		break;
	}

backpoint:

	cout << "처음으로 돌아가기(1), 종료하기(0):";
	cin >> bp;
	switch (bp) {
	case 1:
		goto makeresult;
		break;
	case 0:
		return 0;
		break;
	default:
		cout << "잘못 입력하셨습니다. 다시 입력해주세요!" << endl;
		goto backpoint;
		break;
	}
	
	return 0;
}

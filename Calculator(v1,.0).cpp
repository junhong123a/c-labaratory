//including modules
#include <time.h>
#include <string>
#include <iostream>

using namespace std;

//start function
void start() {
	cout << "계산기 v1.0\nMaker : Junhong(Developer)" << endl;
}
int main() {
	start();

	int p1, p2, t = 0;
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
	
	return 0;
}

//~~이거 커밋 해야하는건가 깃헙에 ㄱㄷ 하고 옴~~

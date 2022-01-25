//including modules
#include <string>
#include <iostream>

using namespace std;

//start function
void start() {
	cout << "계산기 v1.1\nMaker : Junhong(Developer)" << endl;
	cout << "계산기는 계속 개발중임!" << endl;
}

int main() {
	start();

	int i = 0, p1, p2 = 0;
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
		i++;
		break;
	case '-':
		cout << "계산 결과:" << p1 - p2 << endl;
		i++;
		break;
	case '*':
		cout << "계산 결과:" << p1 * p2 << endl;
		i++;
		break;
	case '/':
		cout << "계산 결과:" << p1 / p2 << endl;
		i++;
		break;
	default:
		cout << "잘못 입력하셨습니다. 다시 입력해주세요!" << endl;
		goto makeresult:
		break;

}

//~~이거 커밋 해야하는건가 깃헙에 ㄱㄷ 하고 옴~~//including modules

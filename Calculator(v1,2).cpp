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

	int i = 0, p1, p2, bp = 0;
	char p3;

	while (i < 1) {
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
			break;
		}

		cout << "처음으로 돌아가기(1), 종료하기(0):";
		cin >> bp;

		if (bp == 0)
		{
			break;
		}

		else if (bp == 1) i = 0;

		else
		{
			cout << "다시 입력 해 주세요" << endl;
			bp = 0;
			cin >> bp;
		}
	}
	return 0;
}

//~~이거 커밋 해야하는건가 깃헙에 ㄱㄷ 하고 옴~~//including modules
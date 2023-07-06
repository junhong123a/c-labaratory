#include <iostream>

using namespace std;

void start() {
	cout << "계산기 v1.2\nMaker : Junhong" << endl;
	cout << "계산기는 계속 개발중임! 릴리즈 배포를 축하해주세요!" << endl;
	cout << "해당 계산기 코드는 네이버 지식IN 엑스퍼트의 도움을 받아 제작되었습니다." << endl;
}

int main() {
	start();

	double p1, p2 = 0;
	double result = 0;
	char p3;

	while (true)
	{
		cout << "\n첫번째 수 입력: ";
		cin >> p1;
		cout << "두번째 수 입력: ";
		cin >> p2;

		if (p1 == 0 && p2 == 0) {
			cout << "입력하신 숫자가 모두 0으로 입력되어 게산기를 종료합니다." << endl;
			break;
		}

		cout << "사칙연산 부호 입력: ";
		cin >> p3;

		switch (p3) {
		case '+':
			result = p1 + p2;
			break;
		case '-':
			result = p1 - p2;
			break;
		case '*':
			result = p1 * p2;
			break;
		case '/':
			if (p2 == 0) {
				cout << "0으로 나눌 수 없습니다." << endl;
				continue;
			}
			else {
				result = p1 / p2;
				break;
			}
		default:
			cout << "잘못 입력하셨습니다. 다시 입력해주세요!" << endl;
			break;
		}

		if (p3 == '+' || p3 == '-' || p3 == '*' || p3 == '/')
			cout << "계산 결과:" << result << endl;
	}
}

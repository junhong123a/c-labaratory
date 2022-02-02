#include <string>
#include <iostream>

using namespace std;

void start() {
	cout << "계산기 v1.0\nMaker : Junhong(Developer)" << endl;
	cout << "계산기는 계속 개발중임!" << endl;
	cout << "해당 계산기 코드는 네이버 지식IN 엑스퍼트의 도움을 받아 제작되었으며, 무단 복제 시 법적 처벌을 받을 수 있습니다." << endl;
}

int main() {
	start();

	int p1, p2 = 0;
	int result = 0;
	char p3;

	while (true)
	{
		cout << "\n첫번째 수 입력:";
		cin >> p1;
		cout << "두번째 수 입력:";
		cin >> p2;

		if (p1 == 0 && p2 == 0)
			break;

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
			result = p1 / p2;
			break;
		default:
			cout << "잘못 입력하셨습니다. 다시 입력해주세요!" << endl;
			break;
		}

		if (p3 == '+' || p3 == '-' || p3 == '*' || p3 == '/')
			cout << "계산 결과:" << result << endl;
	}
}

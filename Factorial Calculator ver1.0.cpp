#include <iostream>

using namespace std;

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	int a = 0;
	
	cout << "팩토리얼 계산기" << endl;
	cout << "팩토리얼을 알고 싶은 수를 입력하세요 : ";
	cin >> a;
	cout << a << "! : " << factorial(a) << endl;
}

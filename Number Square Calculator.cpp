#include <iostream>

using namespace std;

int main() {
	int n(0), m(0);

	cout << "제곱 계산기 제작:「SN | 준홍」" << endl;
	cout << "제곱을 알고 싶은 수를 입력하세요:";
	cin >> m;
	cout << "몇 승까지를 알고 싶은지 입력해주세요: ";
	cin >> n;

	for(int i(0), t(1); i <= n; i++, t *= m) cout << m << "^" << i << " = " << t << endl;
}

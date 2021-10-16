#include <iostream>
//辗转相除法-最大公约数&最小公倍数
using namespace std;

int gcd(int a, int b) {
	if (b == 0) { return a; }
	else {
		return gcd(b, a % b);
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a * b / gcd(a, b) << " ";
		cout << gcd(a, b) << endl;
	} else {
		cout << a * b / gcd(b, a) << " ";
		cout << gcd(b, a) << endl;
	}

	return 0;
}
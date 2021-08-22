#include <iostream>
//辗转相除法
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << a * b / gcd(a, b);
	return 0;
}